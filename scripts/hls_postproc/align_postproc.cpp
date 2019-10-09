#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <map>

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/Decl.h"
#include "clang/AST/Type.h"
#include "clang/AST/TypeLoc.h"
#include "clang/AST/Expr.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "llvm/Support/CommandLine.h"

class FunctionDeclASTVisitor : public clang::RecursiveASTVisitor<FunctionDeclASTVisitor>
{
	clang::SourceManager& sourceManager_;
	clang::Rewriter& rewriter_;

  std::map<std::string, std::string> parameterNames_;

public:
	explicit FunctionDeclASTVisitor(clang::SourceManager& sm, clang::Rewriter& r)
		: sourceManager_(sm), rewriter_(r), parameterNames_()
	{ }

  virtual clang::Expr* VisitDeclRefExpr(clang::DeclRefExpr* expr)
  {
    auto name = expr->getNameInfo().getName().getAsString();

    if (parameterNames_.find(name) != parameterNames_.end())
    {
      std::string newName = parameterNames_[name];
      std::cout << "\tRenaming: " << name << " -> " << newName << std::endl;

      rewriter_.ReplaceText(expr->getNameInfo().getSourceRange(), newName);
    }
    return expr;
  }

	virtual bool VisitFunctionDecl(clang::FunctionDecl* func)
	{
		if (sourceManager_.isWrittenInMainFile(func->getSourceRange().getBegin()))
		{
      if (!func->doesThisDeclarationHaveABody())
      {
        std::cout << "Removing FuncDecl: " << func->getNameInfo().getName().getAsString() << std::endl;
        rewriter_.RemoveText(func->getSourceRange());
        return true;
      }
			std::string oldFuncName = func->getNameInfo().getName().getAsString();
			std::string newFuncName = "align";
			std::cout << "Renaming: " << oldFuncName << " -> " << newFuncName << std::endl;
			rewriter_.ReplaceText(func->getNameInfo().getSourceRange(), newFuncName);

      //sort params
      bool global = false;
      std::size_t c = 0;
      std::vector<std::pair<std::uint64_t, std::size_t>> parms;
      for (clang::ParmVarDecl* param : func->parameters())
      {
        auto* type = param->getOriginalType().getTypePtr();
        assert(type->isArrayType());

        std::uint64_t arr_size = llvm::dyn_cast<clang::ConstantArrayType>(type->getAsArrayTypeUnsafe())->getSize().getLimitedValue();
        parms.emplace_back(arr_size, c++);
       // arr_size, param, param->getTypeSourceInfo()->getTypeLoc().getAs<clang::ConstantArrayTypeLoc>());

        auto name = param->getName().str();
        parameterNames_[name] = (arr_size == 1 ? "sub" :
                                (arr_size == 2 ? "query" :
                                (arr_size == 3 ? "subject_len" :
                                (arr_size == 4 ? "query_len" :
                                (arr_size == 5 ? "wbuff" :
                                (arr_size == 6 ? "res" :
                                (arr_size == 7 ? "top_row" :  "__INVALID_NAME__"))))))); 
        global = global || arr_size == 7;
      }
      std::sort(parms.begin(), parms.end(), [](std::pair<std::uint64_t, std::size_t> a, std::pair<std::uint64_t, std::size_t> b)
                                            { return std::get<0>(a) < std::get<0>(b); });
      /*  Order should be:  ([7] appears only for globals)
       *   [1], [3], [2], [4], [5], [6], ([7])
       */
//      std::iter_swap(parms.begin() + 1, parms.begin() + 2);

      for (std::size_t i = 0; i < func->parameters().size(); ++i)
      {
        auto* old_par = func->parameters()[i];
        auto new_par = parms[i];
        std::size_t t = new_par.first;
        std::size_t j = new_par.second;
        
        std::string oldParName = old_par->getName().str();
        std::string newParName = (t == 1 ? "sub" :
                                 (t == 2 ? "query" :
                                 (t == 3 ? "subject_len" :
                                 (t == 4 ? "query_len" :
                                 (t == 5 ? "wbuff" : 
                                 (t == 6 ? "res" :
                                 (t == 7 ? "top_row" :  "__INVALID_NAME__")))))));
        std::cout << "Renaming: " << oldParName << " -> " << newParName << std::endl;

        std::string oldType = old_par->getOriginalType().getAsString();
        std::string newType = (t == 1 ? "hls::stream<InputStreamType>&" :
                              (t == 2 ? "Char" : //[PE_COUNT]
                              (t == 3 || t == 4 ? "int" :
                              (t == 5 ? "hls::stream<OutputStreamType>&" :
                              (t == 6 ? "int32_t*" :
                              (t == 7 ? "int16_t" /*[PE_COUNT]*/ : "__INVALID_TYPE__"))))));
        std::cout << "Replacing: " << oldType << " -> " << newType << std::endl;

        std::string newDecl = newType + " " + newParName + (t != 2 && t != 7 ? "" : "[PE_COUNT]");
        rewriter_.ReplaceText(old_par->getSourceRange(), newDecl);
      }
		}
		return true;
	}
};

class FunctionDeclASTConsumer : public clang::ASTConsumer
{
	clang::Rewriter rewriter_;
	FunctionDeclASTVisitor visitor_; // doesn't have to be private

public:
	// override the constructor in order to pass CI
	explicit FunctionDeclASTConsumer(clang::CompilerInstance& ci)
		: visitor_(ci.getSourceManager(), rewriter_)
	{ }
 
	virtual void HandleTranslationUnit(clang::ASTContext& astContext)
	{
		rewriter_.setSourceMgr(astContext.getSourceManager(), astContext.getLangOpts());
		visitor_.TraverseDecl(astContext.getTranslationUnitDecl());
		rewriter_.overwriteChangedFiles();
	}
};

void add_include(std::string path);

std::string thefile;

class FunctionDeclFrontendAction : public clang::ASTFrontendAction
{
public:
  virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance& CI, clang::StringRef file) {
    thefile = file.str();
    return std::make_unique<FunctionDeclASTConsumer>(CI);
  }
};


using namespace clang::tooling;

int main(int argc, const char **argv)
{
    std::cout << "************** START PATCHING *****************\n";
    {
	llvm::cl::OptionCategory MyToolCategory("anyseq_hls_postproc options");
	CommonOptionsParser OptionsParser(argc, argv, MyToolCategory);

//  std::stringstream ss;
//  std::streambuf* old = std::cout.rdbuf(ss.rdbuf());

	ClangTool Tool(OptionsParser.getCompilations(), OptionsParser.getSourcePathList());
	Tool.run(newFrontendActionFactory<FunctionDeclFrontendAction>().get());

//  std::cout.rdbuf(old);
    }
    add_include(thefile);

  return 0;
}

void add_include(std::string path)
{
  std::stringstream ss;
  {
    std::ifstream inf(path);
    for(std::string str; std::getline(inf, str); ss << str << "\n") 
    {  }
  }
  {
    std::ofstream off(path);
    // adds the include "align.h"
    off << "#include \"align.h\"\n"; 
    for(std::string str; std::getline(ss, str); off << str << "\n")
    {  }
  }
}
