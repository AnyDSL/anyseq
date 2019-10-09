#include "hls_stream.h"
#include "hls_math.h"
extern "C" {
typedef struct {
    int e[16];
} array_122191;
typedef struct {
    int e[1];
} array_122198;

void lambda_183736(int[4], unsigned char[3], unsigned char[1], int[5], int[7], int[2], int[6]);

void lambda_183736(int _183739_216378[4], unsigned char _183740_216379[3], unsigned char _183741_216380[1], int _183742_216381[5], int _183743_216382[7], int _183744_216383[2], int _183745_216384[6]) {
    int  lower_216387;
    int plower_216387;
    int  top_cur_216388;
    int ptop_cur_216388;
    int  lower_216433;
    int plower_216433;
    int  lower_216484;
    int plower_216484;
    int  converge_216508;
    int pconverge_216508;
    int  lower_216511;
    int plower_216511;
    int  bufoff_216512;
    int pbufoff_216512;
    unsigned char  s_216527;
    unsigned char ps_216527;
    unsigned char  sym_q_216534;
    unsigned char psym_q_216534;
    unsigned char  sym_s_216539;
    unsigned char psym_s_216539;
    unsigned char  iai_cpy_216540;
    unsigned char piai_cpy_216540;
    int  converge_216544;
    int pconverge_216544;
    int  _216558;
    int p_216558;
    int  _216567;
    int p_216567;
    unsigned char  sym_q_216589;
    unsigned char psym_q_216589;
    unsigned char  sym_s_216594;
    unsigned char psym_s_216594;
    unsigned char  iai_cpy_216595;
    unsigned char piai_cpy_216595;
    int  converge_216599;
    int pconverge_216599;
    int  _216612;
    int p_216612;
    int  _216621;
    int p_216621;
    unsigned char  sym_q_216641;
    unsigned char psym_q_216641;
    unsigned char  sym_s_216646;
    unsigned char psym_s_216646;
    unsigned char  iai_cpy_216647;
    unsigned char piai_cpy_216647;
    int  converge_216651;
    int pconverge_216651;
    int  _216664;
    int p_216664;
    int  _216673;
    int p_216673;
    unsigned char  sym_q_216693;
    unsigned char psym_q_216693;
    unsigned char  sym_s_216698;
    unsigned char psym_s_216698;
    unsigned char  iai_cpy_216699;
    unsigned char piai_cpy_216699;
    int  converge_216703;
    int pconverge_216703;
    int  _216716;
    int p_216716;
    int  _216725;
    int p_216725;
    unsigned char  sym_q_216745;
    unsigned char psym_q_216745;
    unsigned char  sym_s_216750;
    unsigned char psym_s_216750;
    unsigned char  iai_cpy_216751;
    unsigned char piai_cpy_216751;
    int  converge_216755;
    int pconverge_216755;
    int  _216768;
    int p_216768;
    int  _216777;
    int p_216777;
    unsigned char  sym_q_216797;
    unsigned char psym_q_216797;
    unsigned char  sym_s_216802;
    unsigned char psym_s_216802;
    unsigned char  iai_cpy_216803;
    unsigned char piai_cpy_216803;
    int  converge_216807;
    int pconverge_216807;
    int  _216820;
    int p_216820;
    int  _216829;
    int p_216829;
    unsigned char  sym_q_216849;
    unsigned char psym_q_216849;
    unsigned char  sym_s_216854;
    unsigned char psym_s_216854;
    unsigned char  iai_cpy_216855;
    unsigned char piai_cpy_216855;
    int  converge_216859;
    int pconverge_216859;
    int  _216872;
    int p_216872;
    int  _216881;
    int p_216881;
    unsigned char  sym_q_216901;
    unsigned char psym_q_216901;
    unsigned char  sym_s_216906;
    unsigned char psym_s_216906;
    unsigned char  iai_cpy_216907;
    unsigned char piai_cpy_216907;
    int  converge_216911;
    int pconverge_216911;
    int  _216924;
    int p_216924;
    int  _216933;
    int p_216933;
    unsigned char  sym_q_216953;
    unsigned char psym_q_216953;
    unsigned char  sym_s_216958;
    unsigned char psym_s_216958;
    unsigned char  iai_cpy_216959;
    unsigned char piai_cpy_216959;
    int  converge_216963;
    int pconverge_216963;
    int  _216976;
    int p_216976;
    int  _216985;
    int p_216985;
    unsigned char  sym_q_217005;
    unsigned char psym_q_217005;
    unsigned char  sym_s_217010;
    unsigned char psym_s_217010;
    unsigned char  iai_cpy_217011;
    unsigned char piai_cpy_217011;
    int  converge_217015;
    int pconverge_217015;
    int  _217028;
    int p_217028;
    int  _217037;
    int p_217037;
    unsigned char  sym_q_217057;
    unsigned char psym_q_217057;
    unsigned char  sym_s_217062;
    unsigned char psym_s_217062;
    unsigned char  iai_cpy_217063;
    unsigned char piai_cpy_217063;
    int  converge_217067;
    int pconverge_217067;
    int  _217080;
    int p_217080;
    int  _217089;
    int p_217089;
    unsigned char  sym_q_217109;
    unsigned char psym_q_217109;
    unsigned char  sym_s_217114;
    unsigned char psym_s_217114;
    unsigned char  iai_cpy_217115;
    unsigned char piai_cpy_217115;
    int  converge_217119;
    int pconverge_217119;
    int  _217132;
    int p_217132;
    int  _217141;
    int p_217141;
    unsigned char  sym_q_217160;
    unsigned char psym_q_217160;
    unsigned char  sym_s_217165;
    unsigned char psym_s_217165;
    unsigned char  iai_cpy_217166;
    unsigned char piai_cpy_217166;
    int  converge_217170;
    int pconverge_217170;
    int  _217183;
    int p_217183;
    int  _217192;
    int p_217192;
    unsigned char  sym_q_217212;
    unsigned char psym_q_217212;
    unsigned char  sym_s_217217;
    unsigned char psym_s_217217;
    unsigned char  iai_cpy_217218;
    unsigned char piai_cpy_217218;
    int  converge_217222;
    int pconverge_217222;
    int  _217235;
    int p_217235;
    int  _217244;
    int p_217244;
    unsigned char  sym_q_217264;
    unsigned char psym_q_217264;
    unsigned char  sym_s_217269;
    unsigned char psym_s_217269;
    unsigned char  iai_cpy_217270;
    unsigned char piai_cpy_217270;
    int  converge_217274;
    int pconverge_217274;
    int  _217287;
    int p_217287;
    int  _217296;
    int p_217296;
    unsigned char  sym_q_217315;
    unsigned char psym_q_217315;
    unsigned char  sym_s_217320;
    unsigned char psym_s_217320;
    unsigned char  iai_cpy_217321;
    unsigned char piai_cpy_217321;
    int  converge_217325;
    int pconverge_217325;
    int  _217338;
    int p_217338;
    int  _217347;
    int p_217347;
    unsigned char  sym_q_217366;
    unsigned char psym_q_217366;
    unsigned char  sym_s_217371;
    unsigned char psym_s_217371;
    unsigned char  iai_cpy_217372;
    unsigned char piai_cpy_217372;
    int  converge_217376;
    int pconverge_217376;
    int  _217389;
    int p_217389;
    int  _217398;
    int p_217398;
    int  bufoff_217416;
    int pbufoff_217416;
    #line 122 "/home/fpga/anydsl/runtime/platforms/intrinsics_hls.impala"
    
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122191 array_216492_slot;
    array_122191* array_216492;
    array_216492 = &array_216492_slot;
    #line 23 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
    int* i_217999;
    i_217999 = _183743_216382 + 0;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122191 array_216421_slot;
    array_122191* array_216421;
    array_216421 = &array_216421_slot;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122191 array_216408_slot;
    array_122191* array_216408;
    array_216408 = &array_216408_slot;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122198 array_216468_slot;
    array_122198* array_216468;
    array_216468 = &array_216468_slot;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122198 array_216426_slot;
    array_122198* array_216426;
    array_216426 = &array_216426_slot;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122191 array_216463_slot;
    array_122191* array_216463;
    array_216463 = &array_216463_slot;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122198 array_216415_slot;
    array_122198* array_216415;
    array_216415 = &array_216415_slot;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122191 array_216452_slot;
    array_122191* array_216452;
    array_216452 = &array_216452_slot;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122198 array_216500_slot;
    array_122198* array_216500;
    array_216500 = &array_216500_slot;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122198 array_216459_slot;
    array_122198* array_216459;
    array_216459 = &array_216459_slot;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122191 array_217986_1;
    {
    array_122191 array_217986_1_tmp = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, } };
     array_217986_1 = array_217986_1_tmp;
    }
    
    *array_216452 = array_217986_1;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    array_122198 array_217988_18;
    {
    array_122198 array_217988_18_tmp = { { 0, } };
     array_217988_18 = array_217988_18_tmp;
    }
    
    *array_216459 = array_217988_18;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    *array_216421 = array_217986_1;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    *array_216426 = array_217988_18;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    *array_216408 = array_217986_1;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    *array_216415 = array_217988_18;
    #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    *array_216463 = array_217986_1;
    #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
    *array_216468 = array_217988_18;
    #line 23 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
    int _218000;
    _218000 = *i_217999;
    #line 23 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
    int _218002;
    _218002 = _218000;
    #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
    plower_216387 = 0;
    ptop_cur_216388 = _218002;
    goto l216385;
    l216385: ;
        lower_216387 = plower_216387;
        top_cur_216388 = ptop_cur_216388;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        bool _216390;
        _216390 = lower_216387 < 17;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        if (_216390) goto l216391; else goto l216430;
    l216430: ;
        #line 61 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int* _216514;
        _216514 = _183744_216383 + 0;
        #line 61 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int* _216437;
        _216437 = _183739_216378 + 0;
        #line 48 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _216438;
        _216438 = *_216437;
        #line 48 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int query_len_216439;
        query_len_216439 = _216438;
        #line 49 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _216515;
        _216515 = *_216514;
        #line 82 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        array_122191 array_217986_24;
        {
        array_122191 array_217986_24_tmp = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, } };
         array_217986_24 = array_217986_24_tmp;
        }
        
        *array_216492 = array_217986_24;
        #line 42 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        array_122198 array_217988_41;
        {
        array_122198 array_217988_41_tmp = { { 0, } };
         array_217988_41 = array_217988_41_tmp;
        }
        
        *array_216500 = array_217988_41;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216433 = 0;
        goto l216431;
    l216431: ;
        lower_216433 = plower_216433;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        bool _216434;
        _216434 = lower_216433 < 17;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        if (_216434) goto l216435; else goto l216481;
    l216481: ;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216484 = 0;
        goto l216482;
    l216482: ;
        lower_216484 = plower_216484;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        bool _216485;
        _216485 = lower_216484 < 17;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        if (_216485) goto l216486; else goto l216504;
    l216504: ;
        #line 4 "/home/fpga/anydsl/anyseq/src/utils.impala"
        bool _216505;
        _216505 = 17 < query_len_216439;
        #line 4 "/home/fpga/anydsl/anyseq/src/utils.impala"
        if (_216505) goto l216506; else goto l217984;
    l217984: ;
        #line 4 "/home/fpga/anydsl/anyseq/src/utils.impala"
        pconverge_216508 = 17;
        goto l216507;
    l216506: ;
        #line 4 "/home/fpga/anydsl/anyseq/src/utils.impala"
        pconverge_216508 = query_len_216439;
        goto l216507;
    l216507: ;
        converge_216508 = pconverge_216508;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216545;
        i_216545 = &array_216426->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216831;
        i_216831 = &array_216463->e[11];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216605;
        i_216605 = &array_216408->e[15];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216969;
        i_216969 = &array_216408->e[8];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216652;
        i_216652 = &array_216421->e[14];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217626;
        i_217626 = _183740_216379 + 1;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216883;
        i_216883 = &array_216463->e[10];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217280;
        i_217280 = &array_216408->e[2];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217120;
        i_217120 = &array_216421->e[5];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216741;
        _216741 = query_len_216439 <= 12;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217134;
        i_217134 = &array_216452->e[5];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216912;
        i_216912 = &array_216421->e[9];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217298;
        i_217298 = &array_216463->e[2];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216926;
        i_216926 = &array_216452->e[9];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217311;
        _217311 = query_len_216439 <= 1;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216600;
        i_216600 = &array_216421->e[15];
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217573;
        i_217573 = &array_216492->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216813;
        i_216813 = &array_216408->e[11];
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216551;
        i_216551 = &array_216415->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216978;
        i_216978 = &array_216452->e[8];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216761;
        i_216761 = &array_216408->e[12];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217362;
        _217362 = query_len_216439 <= 0;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217039;
        i_217039 = &array_216463->e[7];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217934;
        i_217934 = _183740_216379 + 15;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217736;
        i_217736 = _183740_216379 + 6;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216614;
        i_216614 = &array_216452->e[15];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217053;
        _217053 = query_len_216439 <= 6;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216770;
        i_216770 = &array_216452->e[12];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216793;
        _216793 = query_len_216439 <= 11;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217457;
        i_217457 = &array_216492->e[8];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216987;
        i_216987 = &array_216463->e[8];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216865;
        i_216865 = &array_216408->e[10];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217714;
        i_217714 = _183740_216379 + 5;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216657;
        i_216657 = &array_216408->e[14];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217194;
        i_217194 = &array_216463->e[4];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216704;
        i_216704 = &array_216421->e[13];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217082;
        i_217082 = &array_216452->e[6];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217442;
        i_217442 = &array_216492->e[5];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216808;
        i_216808 = &array_216421->e[11];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217758;
        i_217758 = _183740_216379 + 7;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217467;
        i_217467 = &array_216492->e[10];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217648;
        i_217648 = _183740_216379 + 2;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216935;
        i_216935 = &array_216463->e[9];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217452;
        i_217452 = &array_216492->e[7];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217340;
        i_217340 = &array_216452->e[1];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216530;
        _216530 = query_len_216439 <= 16;
        #line 49 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int subject_len_216516;
        subject_len_216516 = _216515;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217487;
        i_217487 = &array_216492->e[14];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217176;
        i_217176 = &array_216408->e[4];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217400;
        i_217400 = &array_216463->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217422;
        i_217422 = &array_216492->e[1];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216779;
        i_216779 = &array_216463->e[12];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216917;
        i_216917 = &array_216408->e[9];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216718;
        i_216718 = &array_216452->e[13];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217073;
        i_217073 = &array_216408->e[6];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217427;
        i_217427 = &array_216492->e[2];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217228;
        i_217228 = &array_216408->e[3];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217432;
        i_217432 = &array_216492->e[3];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217326;
        i_217326 = &array_216421->e[1];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216675;
        i_216675 = &array_216463->e[14];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217125;
        i_217125 = &array_216408->e[5];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217670;
        i_217670 = _183740_216379 + 3;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217477;
        i_217477 = &array_216492->e[12];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216727;
        i_216727 = &array_216463->e[13];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216964;
        i_216964 = &array_216421->e[8];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217091;
        i_217091 = &array_216463->e[6];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217780;
        i_217780 = _183740_216379 + 8;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216637;
        _216637 = query_len_216439 <= 14;
        #line 67 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _216517;
        _216517 = subject_len_216516 + converge_216508;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217208;
        _217208 = query_len_216439 <= 3;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217382;
        i_217382 = &array_216408->e[0];
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217497;
        i_217497 = &array_216500->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217030;
        i_217030 = &array_216452->e[7];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216623;
        i_216623 = &array_216463->e[15];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217846;
        i_217846 = _183740_216379 + 11;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217185;
        i_217185 = &array_216452->e[4];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216949;
        _216949 = query_len_216439 <= 8;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216897;
        _216897 = query_len_216439 <= 9;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217824;
        i_217824 = _183740_216379 + 10;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216756;
        i_216756 = &array_216421->e[12];
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217391;
        i_217391 = &array_216452->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217492;
        i_217492 = &array_216492->e[15];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217437;
        i_217437 = &array_216492->e[4];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217802;
        i_217802 = _183740_216379 + 9;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217959;
        i_217959 = _183740_216379 + 16;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217275;
        i_217275 = &array_216421->e[2];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216845;
        _216845 = query_len_216439 <= 10;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216709;
        i_216709 = &array_216408->e[13];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217604;
        i_217604 = _183740_216379 + 0;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217001;
        _217001 = query_len_216439 <= 7;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217171;
        i_217171 = &array_216421->e[4];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217246;
        i_217246 = &array_216463->e[3];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217912;
        i_217912 = _183740_216379 + 14;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217868;
        i_217868 = _183740_216379 + 12;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217156;
        _217156 = query_len_216439 <= 4;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217016;
        i_217016 = &array_216421->e[7];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216874;
        i_216874 = &array_216452->e[10];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217890;
        i_217890 = _183740_216379 + 13;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216585;
        _216585 = query_len_216439 <= 15;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217472;
        i_217472 = &array_216492->e[11];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216860;
        i_216860 = &array_216421->e[10];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217223;
        i_217223 = &array_216421->e[3];
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216560;
        i_216560 = &array_216459->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216666;
        i_216666 = &array_216452->e[14];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217068;
        i_217068 = &array_216421->e[6];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217482;
        i_217482 = &array_216492->e[13];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217349;
        i_217349 = &array_216463->e[1];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217237;
        i_217237 = &array_216452->e[3];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217143;
        i_217143 = &array_216463->e[5];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217331;
        i_217331 = &array_216408->e[1];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217021;
        i_217021 = &array_216408->e[7];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217105;
        _217105 = query_len_216439 <= 5;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217447;
        i_217447 = &array_216492->e[6];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217260;
        _217260 = query_len_216439 <= 2;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217289;
        i_217289 = &array_216452->e[2];
        #line 67 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int steps_216518;
        steps_216518 = _216517 - 1;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216822;
        i_216822 = &array_216452->e[11];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217462;
        i_217462 = &array_216492->e[9];
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216569;
        i_216569 = &array_216468->e[0];
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_217377;
        i_217377 = &array_216421->e[0];
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217692;
        i_217692 = _183740_216379 + 4;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216689;
        _216689 = query_len_216439 <= 13;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216511 = 0;
        pbufoff_216512 = 0;
        goto l216509;
    l216509: ;
        lower_216511 = plower_216511;
        bufoff_216512 = pbufoff_216512;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        bool _216519;
        _216519 = lower_216511 < steps_216518;
        #line 85 "/home/fpga/anydsl/runtime/src/runtime.impala"
        if (_216519) goto l216520; else goto l217978;
    l217978: ;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217979;
        _217979 = *i_216551;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217982;
        _217982 = _217979;
        #line 61 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int* _217981;
        _217981 = _183745_216384 + 0;
        #line 19 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        *_217981 = _217982;
        return ;
    l216520: ;
        #line 70 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216521;
        _216521 = lower_216511 < subject_len_216516;
        #line 70 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216521) goto l216522; else goto l217975;
    l217975: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217573 = 4;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217391 = 0;
        #line 78 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        goto l216528;
    l216522: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216523;
        _216523 = subject_len_216516 <= lower_216511;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216523) goto l216524; else goto l217970;
    l217970: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char* i_217971;
        i_217971 = _183741_216380 + lower_216511;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217972;
        _217972 = *i_217971;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217974;
        _217974 = _217972;
        #line 71 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        ps_216527 = _217974;
        goto l216525;
    l216524: ;
        #line 71 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        ps_216527 = 4;
        goto l216525;
    l216525: ;
        s_216527 = ps_216527;
        #line 73 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217968;
        _217968 = (int)s_216527;
        #line 20 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int* i_217963;
        i_217963 = _183742_216381 + lower_216511;
        #line 20 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int _217964;
        _217964 = *i_217963;
        #line 20 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int _217966;
        _217966 = _217964;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217391 = _217966;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217573 = _217968;
        #line 78 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        goto l216528;
    l216528: ;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217953;
        _217953 = *i_217497;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216530) goto l216531; else goto l217958;
    l217958: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217960;
        _217960 = *i_217959;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217962;
        _217962 = _217960;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216534 = _217962;
        goto l216532;
    l216531: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216534 = 4;
        goto l216532;
    l216532: ;
        sym_q_216534 = psym_q_216534;
        #line 93 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216535;
        _216535 = 16 <= lower_216511;
        #line 93 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216535) goto l216536; else goto l217956;
    l217956: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216539 = 4;
        piai_cpy_216540 = 4;
        goto l216537;
    l216536: ;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217954;
        _217954 = _217953;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217955;
        _iai_217955 = (unsigned char)_217954;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216539 = _iai_217955;
        piai_cpy_216540 = _iai_217955;
        goto l216537;
    l216537: ;
        sym_s_216539 = psym_s_216539;
        iai_cpy_216540 = piai_cpy_216540;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216541;
        _216541 = sym_q_216534 == sym_s_216539;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216541) goto l216542; else goto l217952;
    l217952: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216544 = -1;
        goto l216543;
    l216542: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216544 = 2;
        goto l216543;
    l216543: ;
        converge_216544 = pconverge_216544;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216546;
        _216546 = *i_216545;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216547;
        _216547 = _216546;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216548;
        score_216548 = _216547 + converge_216544;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216552;
        _216552 = *i_216551;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216553;
        _216553 = _216552;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216554;
        qgap_216554 = -1 + _216553;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216555;
        _216555 = score_216548 < qgap_216554;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216555) goto l216556; else goto l217951;
    l217951: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216558 = score_216548;
        goto l216557;
    l216556: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216558 = qgap_216554;
        goto l216557;
    l216557: ;
        _216558 = p_216558;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216561;
        _216561 = *i_216560;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216562;
        _216562 = _216561;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216563;
        sgap_216563 = -1 + _216562;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216564;
        _216564 = _216558 < sgap_216563;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216564) goto l216565; else goto l217950;
    l217950: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216567 = _216558;
        goto l216566;
    l216565: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216567 = sgap_216563;
        goto l216566;
    l216566: ;
        _216567 = p_216567;
        int _217945;
        _217945 = _216561;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216570;
        _216570 = *i_216569;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216571;
        _216571 = _216570;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216572;
        _216572 = (char)_216571;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216574;
        _216574 = _216572 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216574) goto l216575; else goto l217948;
    l217948: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216551 = _217945;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216582;
    l216575: ;
        #line 93 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216535) goto l216576; else goto l217947;
    l217947: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216577;
    l216576: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216545 = _217945;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216577;
    l216577: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216580;
        _216580 = iai_cpy_216540 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216580) goto l216581; else goto l217939;
    l217939: ;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217940;
        _217940 = *i_216551;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217942;
        _217942 = _217940;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216551 = _217942;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216582;
    l216581: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216551 = _216567;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216582;
    l216582: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217498;
        _217498 = *i_217492;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216585) goto l216586; else goto l217933;
    l217933: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217935;
        _217935 = *i_217934;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217937;
        _217937 = _217935;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216589 = _217937;
        goto l216587;
    l216586: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216589 = 4;
        goto l216587;
    l216587: ;
        sym_q_216589 = psym_q_216589;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216590;
        _216590 = 15 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217499;
        _217499 = _217498;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217500;
        _iai_217500 = (unsigned char)_217499;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216590) goto l216591; else goto l217931;
    l217931: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216594 = 4;
        piai_cpy_216595 = 4;
        goto l216592;
    l216591: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216594 = _iai_217500;
        piai_cpy_216595 = _iai_217500;
        goto l216592;
    l216592: ;
        sym_s_216594 = psym_s_216594;
        iai_cpy_216595 = piai_cpy_216595;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216596;
        _216596 = sym_q_216589 == sym_s_216594;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216596) goto l216597; else goto l217930;
    l217930: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216599 = -1;
        goto l216598;
    l216597: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216599 = 2;
        goto l216598;
    l216598: ;
        converge_216599 = pconverge_216599;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216601;
        _216601 = *i_216600;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216602;
        _216602 = _216601;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216603;
        score_216603 = _216602 + converge_216599;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216606;
        _216606 = *i_216605;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216607;
        _216607 = _216606;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216608;
        qgap_216608 = -1 + _216607;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216609;
        _216609 = score_216603 < qgap_216608;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216609) goto l216610; else goto l217929;
    l217929: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216612 = score_216603;
        goto l216611;
    l216610: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216612 = qgap_216608;
        goto l216611;
    l216611: ;
        _216612 = p_216612;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216615;
        _216615 = *i_216614;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216616;
        _216616 = _216615;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216617;
        sgap_216617 = -1 + _216616;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216618;
        _216618 = _216612 < sgap_216617;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216618) goto l216619; else goto l217928;
    l217928: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216621 = _216612;
        goto l216620;
    l216619: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216621 = sgap_216617;
        goto l216620;
    l216620: ;
        _216621 = p_216621;
        int _217923;
        _217923 = _216615;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216624;
        _216624 = *i_216623;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216625;
        _216625 = _216624;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216626;
        _216626 = (char)_216625;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216627;
        _216627 = _216626 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216627) goto l216628; else goto l217926;
    l217926: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216605 = _217923;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216634;
    l216628: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216590) goto l216629; else goto l217925;
    l217925: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216630;
    l216629: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216600 = _217923;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216630;
    l216630: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216632;
        _216632 = iai_cpy_216595 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216632) goto l216633; else goto l217917;
    l217917: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217918;
        _217918 = *i_216605;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217920;
        _217920 = _217918;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216605 = _217920;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216634;
    l216633: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216605 = _216621;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216634;
    l216634: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217493;
        _217493 = *i_216605;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217501;
        _217501 = (int)_iai_217500;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217495;
        _217495 = _217493;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216560 = _217495;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217497 = _217501;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217503;
        _217503 = *i_217487;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216637) goto l216638; else goto l217911;
    l217911: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217913;
        _217913 = *i_217912;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217915;
        _217915 = _217913;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216641 = _217915;
        goto l216639;
    l216638: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216641 = 4;
        goto l216639;
    l216639: ;
        sym_q_216641 = psym_q_216641;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216642;
        _216642 = 14 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217504;
        _217504 = _217503;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217505;
        _iai_217505 = (unsigned char)_217504;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216642) goto l216643; else goto l217909;
    l217909: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216646 = 4;
        piai_cpy_216647 = 4;
        goto l216644;
    l216643: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216646 = _iai_217505;
        piai_cpy_216647 = _iai_217505;
        goto l216644;
    l216644: ;
        sym_s_216646 = psym_s_216646;
        iai_cpy_216647 = piai_cpy_216647;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216648;
        _216648 = sym_q_216641 == sym_s_216646;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216648) goto l216649; else goto l217908;
    l217908: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216651 = -1;
        goto l216650;
    l216649: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216651 = 2;
        goto l216650;
    l216650: ;
        converge_216651 = pconverge_216651;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216653;
        _216653 = *i_216652;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216654;
        _216654 = _216653;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216655;
        score_216655 = _216654 + converge_216651;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216658;
        _216658 = *i_216657;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216659;
        _216659 = _216658;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216660;
        qgap_216660 = -1 + _216659;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216661;
        _216661 = score_216655 < qgap_216660;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216661) goto l216662; else goto l217907;
    l217907: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216664 = score_216655;
        goto l216663;
    l216662: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216664 = qgap_216660;
        goto l216663;
    l216663: ;
        _216664 = p_216664;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216667;
        _216667 = *i_216666;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216668;
        _216668 = _216667;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216669;
        sgap_216669 = -1 + _216668;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216670;
        _216670 = _216664 < sgap_216669;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216670) goto l216671; else goto l217906;
    l217906: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216673 = _216664;
        goto l216672;
    l216671: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216673 = sgap_216669;
        goto l216672;
    l216672: ;
        _216673 = p_216673;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216676;
        _216676 = *i_216675;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216677;
        _216677 = _216676;
        int _217901;
        _217901 = _216667;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216678;
        _216678 = (char)_216677;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216679;
        _216679 = _216678 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216679) goto l216680; else goto l217904;
    l217904: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216657 = _217901;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216686;
    l216680: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216642) goto l216681; else goto l217903;
    l217903: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216682;
    l216681: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216652 = _217901;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216682;
    l216682: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216684;
        _216684 = iai_cpy_216647 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216684) goto l216685; else goto l217895;
    l217895: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217896;
        _217896 = *i_216657;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217898;
        _217898 = _217896;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216657 = _217898;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216686;
    l216685: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216657 = _216673;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216686;
    l216686: ;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217506;
        _217506 = (int)_iai_217505;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217488;
        _217488 = *i_216657;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217490;
        _217490 = _217488;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216614 = _217490;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217492 = _217506;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217508;
        _217508 = *i_217482;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216689) goto l216690; else goto l217889;
    l217889: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217891;
        _217891 = *i_217890;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217893;
        _217893 = _217891;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216693 = _217893;
        goto l216691;
    l216690: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216693 = 4;
        goto l216691;
    l216691: ;
        sym_q_216693 = psym_q_216693;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217509;
        _217509 = _217508;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217510;
        _iai_217510 = (unsigned char)_217509;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216694;
        _216694 = 13 <= lower_216511;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216694) goto l216695; else goto l217887;
    l217887: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216698 = 4;
        piai_cpy_216699 = 4;
        goto l216696;
    l216695: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216698 = _iai_217510;
        piai_cpy_216699 = _iai_217510;
        goto l216696;
    l216696: ;
        sym_s_216698 = psym_s_216698;
        iai_cpy_216699 = piai_cpy_216699;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216700;
        _216700 = sym_q_216693 == sym_s_216698;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216700) goto l216701; else goto l217886;
    l217886: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216703 = -1;
        goto l216702;
    l216701: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216703 = 2;
        goto l216702;
    l216702: ;
        converge_216703 = pconverge_216703;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216705;
        _216705 = *i_216704;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216706;
        _216706 = _216705;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216710;
        _216710 = *i_216709;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216707;
        score_216707 = _216706 + converge_216703;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216711;
        _216711 = _216710;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216712;
        qgap_216712 = -1 + _216711;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216713;
        _216713 = score_216707 < qgap_216712;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216713) goto l216714; else goto l217885;
    l217885: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216716 = score_216707;
        goto l216715;
    l216714: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216716 = qgap_216712;
        goto l216715;
    l216715: ;
        _216716 = p_216716;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216719;
        _216719 = *i_216718;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216720;
        _216720 = _216719;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216721;
        sgap_216721 = -1 + _216720;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216722;
        _216722 = _216716 < sgap_216721;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216722) goto l216723; else goto l217884;
    l217884: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216725 = _216716;
        goto l216724;
    l216723: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216725 = sgap_216721;
        goto l216724;
    l216724: ;
        _216725 = p_216725;
        int _217879;
        _217879 = _216719;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216728;
        _216728 = *i_216727;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216729;
        _216729 = _216728;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216730;
        _216730 = (char)_216729;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216731;
        _216731 = _216730 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216731) goto l216732; else goto l217882;
    l217882: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216709 = _217879;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216738;
    l216732: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216694) goto l216733; else goto l217881;
    l217881: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216734;
    l216733: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216704 = _217879;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216734;
    l216734: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216736;
        _216736 = iai_cpy_216699 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216736) goto l216737; else goto l217873;
    l217873: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217874;
        _217874 = *i_216709;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217876;
        _217876 = _217874;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216709 = _217876;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216738;
    l216737: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216709 = _216725;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216738;
    l216738: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217483;
        _217483 = *i_216709;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217485;
        _217485 = _217483;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217511;
        _217511 = (int)_iai_217510;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216666 = _217485;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217487 = _217511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217513;
        _217513 = *i_217477;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216741) goto l216742; else goto l217867;
    l217867: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217869;
        _217869 = *i_217868;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217871;
        _217871 = _217869;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216745 = _217871;
        goto l216743;
    l216742: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216745 = 4;
        goto l216743;
    l216743: ;
        sym_q_216745 = psym_q_216745;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216746;
        _216746 = 12 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217514;
        _217514 = _217513;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217515;
        _iai_217515 = (unsigned char)_217514;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216746) goto l216747; else goto l217865;
    l217865: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216750 = 4;
        piai_cpy_216751 = 4;
        goto l216748;
    l216747: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216750 = _iai_217515;
        piai_cpy_216751 = _iai_217515;
        goto l216748;
    l216748: ;
        sym_s_216750 = psym_s_216750;
        iai_cpy_216751 = piai_cpy_216751;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216752;
        _216752 = sym_q_216745 == sym_s_216750;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216752) goto l216753; else goto l217864;
    l217864: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216755 = -1;
        goto l216754;
    l216753: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216755 = 2;
        goto l216754;
    l216754: ;
        converge_216755 = pconverge_216755;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216757;
        _216757 = *i_216756;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216758;
        _216758 = _216757;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216759;
        score_216759 = _216758 + converge_216755;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216762;
        _216762 = *i_216761;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216763;
        _216763 = _216762;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216764;
        qgap_216764 = -1 + _216763;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216765;
        _216765 = score_216759 < qgap_216764;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216765) goto l216766; else goto l217863;
    l217863: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216768 = score_216759;
        goto l216767;
    l216766: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216768 = qgap_216764;
        goto l216767;
    l216767: ;
        _216768 = p_216768;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216771;
        _216771 = *i_216770;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216772;
        _216772 = _216771;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216773;
        sgap_216773 = -1 + _216772;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216774;
        _216774 = _216768 < sgap_216773;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216774) goto l216775; else goto l217862;
    l217862: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216777 = _216768;
        goto l216776;
    l216775: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216777 = sgap_216773;
        goto l216776;
    l216776: ;
        _216777 = p_216777;
        int _217857;
        _217857 = _216771;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216780;
        _216780 = *i_216779;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216781;
        _216781 = _216780;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216782;
        _216782 = (char)_216781;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216783;
        _216783 = _216782 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216783) goto l216784; else goto l217860;
    l217860: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216761 = _217857;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216790;
    l216784: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216746) goto l216785; else goto l217859;
    l217859: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216786;
    l216785: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216756 = _217857;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216786;
    l216786: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216788;
        _216788 = iai_cpy_216751 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216788) goto l216789; else goto l217851;
    l217851: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217852;
        _217852 = *i_216761;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217854;
        _217854 = _217852;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216761 = _217854;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216790;
    l216789: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216761 = _216777;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216790;
    l216790: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217478;
        _217478 = *i_216761;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217516;
        _217516 = (int)_iai_217515;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217480;
        _217480 = _217478;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216718 = _217480;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217482 = _217516;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217518;
        _217518 = *i_217472;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216793) goto l216794; else goto l217845;
    l217845: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217847;
        _217847 = *i_217846;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217849;
        _217849 = _217847;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216797 = _217849;
        goto l216795;
    l216794: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216797 = 4;
        goto l216795;
    l216795: ;
        sym_q_216797 = psym_q_216797;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216798;
        _216798 = 11 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217519;
        _217519 = _217518;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217520;
        _iai_217520 = (unsigned char)_217519;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216798) goto l216799; else goto l217843;
    l217843: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216802 = 4;
        piai_cpy_216803 = 4;
        goto l216800;
    l216799: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216802 = _iai_217520;
        piai_cpy_216803 = _iai_217520;
        goto l216800;
    l216800: ;
        sym_s_216802 = psym_s_216802;
        iai_cpy_216803 = piai_cpy_216803;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216804;
        _216804 = sym_q_216797 == sym_s_216802;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216804) goto l216805; else goto l217842;
    l217842: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216807 = -1;
        goto l216806;
    l216805: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216807 = 2;
        goto l216806;
    l216806: ;
        converge_216807 = pconverge_216807;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216809;
        _216809 = *i_216808;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216810;
        _216810 = _216809;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216814;
        _216814 = *i_216813;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216811;
        score_216811 = _216810 + converge_216807;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216815;
        _216815 = _216814;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216816;
        qgap_216816 = -1 + _216815;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216817;
        _216817 = score_216811 < qgap_216816;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216817) goto l216818; else goto l217841;
    l217841: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216820 = score_216811;
        goto l216819;
    l216818: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216820 = qgap_216816;
        goto l216819;
    l216819: ;
        _216820 = p_216820;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216823;
        _216823 = *i_216822;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216824;
        _216824 = _216823;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216825;
        sgap_216825 = -1 + _216824;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216826;
        _216826 = _216820 < sgap_216825;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216826) goto l216827; else goto l217840;
    l217840: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216829 = _216820;
        goto l216828;
    l216827: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216829 = sgap_216825;
        goto l216828;
    l216828: ;
        _216829 = p_216829;
        int _217835;
        _217835 = _216823;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216832;
        _216832 = *i_216831;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216833;
        _216833 = _216832;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216834;
        _216834 = (char)_216833;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216835;
        _216835 = _216834 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216835) goto l216836; else goto l217838;
    l217838: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216813 = _217835;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216842;
    l216836: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216798) goto l216837; else goto l217837;
    l217837: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216838;
    l216837: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216808 = _217835;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216838;
    l216838: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216840;
        _216840 = iai_cpy_216803 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216840) goto l216841; else goto l217829;
    l217829: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217830;
        _217830 = *i_216813;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217832;
        _217832 = _217830;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216813 = _217832;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216842;
    l216841: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216813 = _216829;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216842;
    l216842: ;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217521;
        _217521 = (int)_iai_217520;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217473;
        _217473 = *i_216813;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217475;
        _217475 = _217473;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216770 = _217475;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217477 = _217521;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217523;
        _217523 = *i_217467;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216845) goto l216846; else goto l217823;
    l217823: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217825;
        _217825 = *i_217824;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217827;
        _217827 = _217825;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216849 = _217827;
        goto l216847;
    l216846: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216849 = 4;
        goto l216847;
    l216847: ;
        sym_q_216849 = psym_q_216849;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217524;
        _217524 = _217523;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216850;
        _216850 = 10 <= lower_216511;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217525;
        _iai_217525 = (unsigned char)_217524;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216850) goto l216851; else goto l217821;
    l217821: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216854 = 4;
        piai_cpy_216855 = 4;
        goto l216852;
    l216851: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216854 = _iai_217525;
        piai_cpy_216855 = _iai_217525;
        goto l216852;
    l216852: ;
        sym_s_216854 = psym_s_216854;
        iai_cpy_216855 = piai_cpy_216855;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216856;
        _216856 = sym_q_216849 == sym_s_216854;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216856) goto l216857; else goto l217820;
    l217820: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216859 = -1;
        goto l216858;
    l216857: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216859 = 2;
        goto l216858;
    l216858: ;
        converge_216859 = pconverge_216859;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216861;
        _216861 = *i_216860;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216862;
        _216862 = _216861;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216863;
        score_216863 = _216862 + converge_216859;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216866;
        _216866 = *i_216865;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216867;
        _216867 = _216866;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216868;
        qgap_216868 = -1 + _216867;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216869;
        _216869 = score_216863 < qgap_216868;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216869) goto l216870; else goto l217819;
    l217819: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216872 = score_216863;
        goto l216871;
    l216870: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216872 = qgap_216868;
        goto l216871;
    l216871: ;
        _216872 = p_216872;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216875;
        _216875 = *i_216874;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216876;
        _216876 = _216875;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216877;
        sgap_216877 = -1 + _216876;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216878;
        _216878 = _216872 < sgap_216877;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216878) goto l216879; else goto l217818;
    l217818: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216881 = _216872;
        goto l216880;
    l216879: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216881 = sgap_216877;
        goto l216880;
    l216880: ;
        _216881 = p_216881;
        int _217813;
        _217813 = _216875;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216884;
        _216884 = *i_216883;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216885;
        _216885 = _216884;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216886;
        _216886 = (char)_216885;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216887;
        _216887 = _216886 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216887) goto l216888; else goto l217816;
    l217816: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216865 = _217813;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216894;
    l216888: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216850) goto l216889; else goto l217815;
    l217815: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216890;
    l216889: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216860 = _217813;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216890;
    l216890: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216892;
        _216892 = iai_cpy_216855 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216892) goto l216893; else goto l217807;
    l217807: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217808;
        _217808 = *i_216865;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217810;
        _217810 = _217808;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216865 = _217810;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216894;
    l216893: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216865 = _216881;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216894;
    l216894: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217468;
        _217468 = *i_216865;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217470;
        _217470 = _217468;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217526;
        _217526 = (int)_iai_217525;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216822 = _217470;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217472 = _217526;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217528;
        _217528 = *i_217462;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216897) goto l216898; else goto l217801;
    l217801: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217803;
        _217803 = *i_217802;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217805;
        _217805 = _217803;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216901 = _217805;
        goto l216899;
    l216898: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216901 = 4;
        goto l216899;
    l216899: ;
        sym_q_216901 = psym_q_216901;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216902;
        _216902 = 9 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217529;
        _217529 = _217528;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217530;
        _iai_217530 = (unsigned char)_217529;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216902) goto l216903; else goto l217799;
    l217799: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216906 = 4;
        piai_cpy_216907 = 4;
        goto l216904;
    l216903: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216906 = _iai_217530;
        piai_cpy_216907 = _iai_217530;
        goto l216904;
    l216904: ;
        sym_s_216906 = psym_s_216906;
        iai_cpy_216907 = piai_cpy_216907;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216908;
        _216908 = sym_q_216901 == sym_s_216906;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216908) goto l216909; else goto l217798;
    l217798: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216911 = -1;
        goto l216910;
    l216909: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216911 = 2;
        goto l216910;
    l216910: ;
        converge_216911 = pconverge_216911;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216913;
        _216913 = *i_216912;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216914;
        _216914 = _216913;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216918;
        _216918 = *i_216917;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216915;
        score_216915 = _216914 + converge_216911;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216919;
        _216919 = _216918;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216920;
        qgap_216920 = -1 + _216919;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216921;
        _216921 = score_216915 < qgap_216920;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216921) goto l216922; else goto l217797;
    l217797: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216924 = score_216915;
        goto l216923;
    l216922: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216924 = qgap_216920;
        goto l216923;
    l216923: ;
        _216924 = p_216924;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216927;
        _216927 = *i_216926;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216928;
        _216928 = _216927;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216929;
        sgap_216929 = -1 + _216928;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216930;
        _216930 = _216924 < sgap_216929;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216930) goto l216931; else goto l217796;
    l217796: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216933 = _216924;
        goto l216932;
    l216931: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216933 = sgap_216929;
        goto l216932;
    l216932: ;
        _216933 = p_216933;
        int _217791;
        _217791 = _216927;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216936;
        _216936 = *i_216935;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216937;
        _216937 = _216936;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216938;
        _216938 = (char)_216937;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216939;
        _216939 = _216938 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216939) goto l216940; else goto l217794;
    l217794: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216917 = _217791;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216946;
    l216940: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216902) goto l216941; else goto l217793;
    l217793: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216942;
    l216941: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216912 = _217791;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216942;
    l216942: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216944;
        _216944 = iai_cpy_216907 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216944) goto l216945; else goto l217785;
    l217785: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217786;
        _217786 = *i_216917;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217788;
        _217788 = _217786;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216917 = _217788;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216946;
    l216945: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216917 = _216933;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216946;
    l216946: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217463;
        _217463 = *i_216917;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217531;
        _217531 = (int)_iai_217530;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217465;
        _217465 = _217463;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216874 = _217465;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217467 = _217531;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217533;
        _217533 = *i_217457;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216949) goto l216950; else goto l217779;
    l217779: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217781;
        _217781 = *i_217780;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217783;
        _217783 = _217781;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216953 = _217783;
        goto l216951;
    l216950: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_216953 = 4;
        goto l216951;
    l216951: ;
        sym_q_216953 = psym_q_216953;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217534;
        _217534 = _217533;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _216954;
        _216954 = 8 <= lower_216511;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217535;
        _iai_217535 = (unsigned char)_217534;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216954) goto l216955; else goto l217777;
    l217777: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216958 = 4;
        piai_cpy_216959 = 4;
        goto l216956;
    l216955: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_216958 = _iai_217535;
        piai_cpy_216959 = _iai_217535;
        goto l216956;
    l216956: ;
        sym_s_216958 = psym_s_216958;
        iai_cpy_216959 = piai_cpy_216959;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216960;
        _216960 = sym_q_216953 == sym_s_216958;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216960) goto l216961; else goto l217776;
    l217776: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216963 = -1;
        goto l216962;
    l216961: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_216963 = 2;
        goto l216962;
    l216962: ;
        converge_216963 = pconverge_216963;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216965;
        _216965 = *i_216964;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216966;
        _216966 = _216965;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_216967;
        score_216967 = _216966 + converge_216963;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216970;
        _216970 = *i_216969;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216971;
        _216971 = _216970;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_216972;
        qgap_216972 = -1 + _216971;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216973;
        _216973 = score_216967 < qgap_216972;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216973) goto l216974; else goto l217775;
    l217775: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216976 = score_216967;
        goto l216975;
    l216974: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216976 = qgap_216972;
        goto l216975;
    l216975: ;
        _216976 = p_216976;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216979;
        _216979 = *i_216978;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216980;
        _216980 = _216979;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_216981;
        sgap_216981 = -1 + _216980;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _216982;
        _216982 = _216976 < sgap_216981;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_216982) goto l216983; else goto l217774;
    l217774: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216985 = _216976;
        goto l216984;
    l216983: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_216985 = sgap_216981;
        goto l216984;
    l216984: ;
        _216985 = p_216985;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216988;
        _216988 = *i_216987;
        int _217769;
        _217769 = _216979;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216989;
        _216989 = _216988;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _216990;
        _216990 = (char)_216989;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216991;
        _216991 = _216990 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216991) goto l216992; else goto l217772;
    l217772: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216969 = _217769;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216998;
    l216992: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216954) goto l216993; else goto l217771;
    l217771: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216994;
    l216993: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216964 = _217769;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216994;
    l216994: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216996;
        _216996 = iai_cpy_216959 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216996) goto l216997; else goto l217763;
    l217763: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217764;
        _217764 = *i_216969;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217766;
        _217766 = _217764;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216969 = _217766;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216998;
    l216997: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216969 = _216985;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l216998;
    l216998: ;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217536;
        _217536 = (int)_iai_217535;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217458;
        _217458 = *i_216969;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217460;
        _217460 = _217458;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216926 = _217460;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217462 = _217536;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217538;
        _217538 = *i_217452;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217001) goto l217002; else goto l217757;
    l217757: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217759;
        _217759 = *i_217758;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217761;
        _217761 = _217759;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217005 = _217761;
        goto l217003;
    l217002: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217005 = 4;
        goto l217003;
    l217003: ;
        sym_q_217005 = psym_q_217005;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217539;
        _217539 = _217538;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217006;
        _217006 = 7 <= lower_216511;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217540;
        _iai_217540 = (unsigned char)_217539;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217006) goto l217007; else goto l217755;
    l217755: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217010 = 4;
        piai_cpy_217011 = 4;
        goto l217008;
    l217007: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217010 = _iai_217540;
        piai_cpy_217011 = _iai_217540;
        goto l217008;
    l217008: ;
        sym_s_217010 = psym_s_217010;
        iai_cpy_217011 = piai_cpy_217011;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217012;
        _217012 = sym_q_217005 == sym_s_217010;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217012) goto l217013; else goto l217754;
    l217754: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217015 = -1;
        goto l217014;
    l217013: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217015 = 2;
        goto l217014;
    l217014: ;
        converge_217015 = pconverge_217015;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217017;
        _217017 = *i_217016;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217018;
        _217018 = _217017;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217019;
        score_217019 = _217018 + converge_217015;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217022;
        _217022 = *i_217021;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217023;
        _217023 = _217022;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217024;
        qgap_217024 = -1 + _217023;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217025;
        _217025 = score_217019 < qgap_217024;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217025) goto l217026; else goto l217753;
    l217753: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217028 = score_217019;
        goto l217027;
    l217026: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217028 = qgap_217024;
        goto l217027;
    l217027: ;
        _217028 = p_217028;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217031;
        _217031 = *i_217030;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217032;
        _217032 = _217031;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217033;
        sgap_217033 = -1 + _217032;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217034;
        _217034 = _217028 < sgap_217033;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217034) goto l217035; else goto l217752;
    l217752: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217037 = _217028;
        goto l217036;
    l217035: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217037 = sgap_217033;
        goto l217036;
    l217036: ;
        _217037 = p_217037;
        int _217747;
        _217747 = _217031;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217040;
        _217040 = *i_217039;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217041;
        _217041 = _217040;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217042;
        _217042 = (char)_217041;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217043;
        _217043 = _217042 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217043) goto l217044; else goto l217750;
    l217750: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217021 = _217747;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217050;
    l217044: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217006) goto l217045; else goto l217749;
    l217749: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217046;
    l217045: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217016 = _217747;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217046;
    l217046: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217048;
        _217048 = iai_cpy_217011 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217048) goto l217049; else goto l217741;
    l217741: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217742;
        _217742 = *i_217021;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217744;
        _217744 = _217742;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217021 = _217744;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217050;
    l217049: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217021 = _217037;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217050;
    l217050: ;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217541;
        _217541 = (int)_iai_217540;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217453;
        _217453 = *i_217021;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217455;
        _217455 = _217453;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216978 = _217455;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217457 = _217541;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217543;
        _217543 = *i_217447;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217053) goto l217054; else goto l217735;
    l217735: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217737;
        _217737 = *i_217736;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217739;
        _217739 = _217737;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217057 = _217739;
        goto l217055;
    l217054: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217057 = 4;
        goto l217055;
    l217055: ;
        sym_q_217057 = psym_q_217057;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217544;
        _217544 = _217543;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217058;
        _217058 = 6 <= lower_216511;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217545;
        _iai_217545 = (unsigned char)_217544;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217058) goto l217059; else goto l217733;
    l217733: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217062 = 4;
        piai_cpy_217063 = 4;
        goto l217060;
    l217059: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217062 = _iai_217545;
        piai_cpy_217063 = _iai_217545;
        goto l217060;
    l217060: ;
        sym_s_217062 = psym_s_217062;
        iai_cpy_217063 = piai_cpy_217063;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217064;
        _217064 = sym_q_217057 == sym_s_217062;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217064) goto l217065; else goto l217732;
    l217732: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217067 = -1;
        goto l217066;
    l217065: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217067 = 2;
        goto l217066;
    l217066: ;
        converge_217067 = pconverge_217067;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217069;
        _217069 = *i_217068;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217070;
        _217070 = _217069;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217071;
        score_217071 = _217070 + converge_217067;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217074;
        _217074 = *i_217073;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217075;
        _217075 = _217074;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217076;
        qgap_217076 = -1 + _217075;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217077;
        _217077 = score_217071 < qgap_217076;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217077) goto l217078; else goto l217731;
    l217731: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217080 = score_217071;
        goto l217079;
    l217078: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217080 = qgap_217076;
        goto l217079;
    l217079: ;
        _217080 = p_217080;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217083;
        _217083 = *i_217082;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217084;
        _217084 = _217083;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217085;
        sgap_217085 = -1 + _217084;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217086;
        _217086 = _217080 < sgap_217085;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217086) goto l217087; else goto l217730;
    l217730: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217089 = _217080;
        goto l217088;
    l217087: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217089 = sgap_217085;
        goto l217088;
    l217088: ;
        _217089 = p_217089;
        int _217725;
        _217725 = _217083;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217092;
        _217092 = *i_217091;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217093;
        _217093 = _217092;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217094;
        _217094 = (char)_217093;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217095;
        _217095 = _217094 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217095) goto l217096; else goto l217728;
    l217728: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217073 = _217725;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217102;
    l217096: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217058) goto l217097; else goto l217727;
    l217727: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217098;
    l217097: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217068 = _217725;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217098;
    l217098: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217100;
        _217100 = iai_cpy_217063 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217100) goto l217101; else goto l217719;
    l217719: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217720;
        _217720 = *i_217073;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217722;
        _217722 = _217720;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217073 = _217722;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217102;
    l217101: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217073 = _217089;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217102;
    l217102: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217448;
        _217448 = *i_217073;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217546;
        _217546 = (int)_iai_217545;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217450;
        _217450 = _217448;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217030 = _217450;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217452 = _217546;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217548;
        _217548 = *i_217442;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217105) goto l217106; else goto l217713;
    l217713: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217715;
        _217715 = *i_217714;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217717;
        _217717 = _217715;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217109 = _217717;
        goto l217107;
    l217106: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217109 = 4;
        goto l217107;
    l217107: ;
        sym_q_217109 = psym_q_217109;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217110;
        _217110 = 5 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217549;
        _217549 = _217548;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217550;
        _iai_217550 = (unsigned char)_217549;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217110) goto l217111; else goto l217711;
    l217711: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217114 = 4;
        piai_cpy_217115 = 4;
        goto l217112;
    l217111: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217114 = _iai_217550;
        piai_cpy_217115 = _iai_217550;
        goto l217112;
    l217112: ;
        sym_s_217114 = psym_s_217114;
        iai_cpy_217115 = piai_cpy_217115;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217116;
        _217116 = sym_q_217109 == sym_s_217114;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217116) goto l217117; else goto l217710;
    l217710: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217119 = -1;
        goto l217118;
    l217117: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217119 = 2;
        goto l217118;
    l217118: ;
        converge_217119 = pconverge_217119;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217121;
        _217121 = *i_217120;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217122;
        _217122 = _217121;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217126;
        _217126 = *i_217125;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217123;
        score_217123 = _217122 + converge_217119;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217127;
        _217127 = _217126;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217128;
        qgap_217128 = -1 + _217127;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217129;
        _217129 = score_217123 < qgap_217128;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217129) goto l217130; else goto l217709;
    l217709: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217132 = score_217123;
        goto l217131;
    l217130: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217132 = qgap_217128;
        goto l217131;
    l217131: ;
        _217132 = p_217132;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217135;
        _217135 = *i_217134;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217136;
        _217136 = _217135;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217137;
        sgap_217137 = -1 + _217136;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217138;
        _217138 = _217132 < sgap_217137;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217138) goto l217139; else goto l217708;
    l217708: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217141 = _217132;
        goto l217140;
    l217139: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217141 = sgap_217137;
        goto l217140;
    l217140: ;
        _217141 = p_217141;
        int _217703;
        _217703 = _217135;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217144;
        _217144 = *i_217143;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217145;
        _217145 = _217144;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217146;
        _217146 = (char)_217145;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217147;
        _217147 = _217146 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217147) goto l217148; else goto l217706;
    l217706: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217125 = _217703;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217154;
    l217148: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217110) goto l217149; else goto l217705;
    l217705: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217150;
    l217149: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217120 = _217703;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217150;
    l217150: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217152;
        _217152 = iai_cpy_217115 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217152) goto l217153; else goto l217697;
    l217697: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217698;
        _217698 = *i_217125;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217700;
        _217700 = _217698;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217125 = _217700;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217154;
    l217153: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217125 = _217141;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217154;
    l217154: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217443;
        _217443 = *i_217125;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217445;
        _217445 = _217443;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217551;
        _217551 = (int)_iai_217550;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217082 = _217445;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217447 = _217551;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217553;
        _217553 = *i_217437;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217156) goto l217157; else goto l217691;
    l217691: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217693;
        _217693 = *i_217692;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217695;
        _217695 = _217693;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217160 = _217695;
        goto l217158;
    l217157: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217160 = 4;
        goto l217158;
    l217158: ;
        sym_q_217160 = psym_q_217160;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217161;
        _217161 = 4 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217554;
        _217554 = _217553;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217555;
        _iai_217555 = (unsigned char)_217554;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217161) goto l217162; else goto l217689;
    l217689: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217165 = 4;
        piai_cpy_217166 = 4;
        goto l217163;
    l217162: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217165 = _iai_217555;
        piai_cpy_217166 = _iai_217555;
        goto l217163;
    l217163: ;
        sym_s_217165 = psym_s_217165;
        iai_cpy_217166 = piai_cpy_217166;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217167;
        _217167 = sym_q_217160 == sym_s_217165;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217167) goto l217168; else goto l217688;
    l217688: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217170 = -1;
        goto l217169;
    l217168: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217170 = 2;
        goto l217169;
    l217169: ;
        converge_217170 = pconverge_217170;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217172;
        _217172 = *i_217171;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217173;
        _217173 = _217172;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217177;
        _217177 = *i_217176;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217178;
        _217178 = _217177;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217174;
        score_217174 = _217173 + converge_217170;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217179;
        qgap_217179 = -1 + _217178;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217180;
        _217180 = score_217174 < qgap_217179;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217180) goto l217181; else goto l217687;
    l217687: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217183 = score_217174;
        goto l217182;
    l217181: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217183 = qgap_217179;
        goto l217182;
    l217182: ;
        _217183 = p_217183;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217186;
        _217186 = *i_217185;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217187;
        _217187 = _217186;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217188;
        sgap_217188 = -1 + _217187;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217189;
        _217189 = _217183 < sgap_217188;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217189) goto l217190; else goto l217686;
    l217686: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217192 = _217183;
        goto l217191;
    l217190: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217192 = sgap_217188;
        goto l217191;
    l217191: ;
        _217192 = p_217192;
        int _217681;
        _217681 = _217186;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217195;
        _217195 = *i_217194;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217196;
        _217196 = _217195;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217197;
        _217197 = (char)_217196;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217198;
        _217198 = _217197 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217198) goto l217199; else goto l217684;
    l217684: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217176 = _217681;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217205;
    l217199: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217161) goto l217200; else goto l217683;
    l217683: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217201;
    l217200: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217171 = _217681;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217201;
    l217201: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217203;
        _217203 = iai_cpy_217166 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217203) goto l217204; else goto l217675;
    l217675: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217676;
        _217676 = *i_217176;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217678;
        _217678 = _217676;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217176 = _217678;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217205;
    l217204: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217176 = _217192;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217205;
    l217205: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217438;
        _217438 = *i_217176;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217440;
        _217440 = _217438;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217556;
        _217556 = (int)_iai_217555;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217134 = _217440;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217442 = _217556;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217558;
        _217558 = *i_217432;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217208) goto l217209; else goto l217669;
    l217669: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217671;
        _217671 = *i_217670;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217673;
        _217673 = _217671;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217212 = _217673;
        goto l217210;
    l217209: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217212 = 4;
        goto l217210;
    l217210: ;
        sym_q_217212 = psym_q_217212;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217559;
        _217559 = _217558;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217213;
        _217213 = 3 <= lower_216511;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217560;
        _iai_217560 = (unsigned char)_217559;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217213) goto l217214; else goto l217667;
    l217667: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217217 = 4;
        piai_cpy_217218 = 4;
        goto l217215;
    l217214: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217217 = _iai_217560;
        piai_cpy_217218 = _iai_217560;
        goto l217215;
    l217215: ;
        sym_s_217217 = psym_s_217217;
        iai_cpy_217218 = piai_cpy_217218;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217219;
        _217219 = sym_q_217212 == sym_s_217217;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217219) goto l217220; else goto l217666;
    l217666: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217222 = -1;
        goto l217221;
    l217220: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217222 = 2;
        goto l217221;
    l217221: ;
        converge_217222 = pconverge_217222;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217224;
        _217224 = *i_217223;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217225;
        _217225 = _217224;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217229;
        _217229 = *i_217228;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217226;
        score_217226 = _217225 + converge_217222;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217230;
        _217230 = _217229;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217231;
        qgap_217231 = -1 + _217230;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217232;
        _217232 = score_217226 < qgap_217231;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217232) goto l217233; else goto l217665;
    l217665: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217235 = score_217226;
        goto l217234;
    l217233: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217235 = qgap_217231;
        goto l217234;
    l217234: ;
        _217235 = p_217235;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217238;
        _217238 = *i_217237;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217239;
        _217239 = _217238;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217240;
        sgap_217240 = -1 + _217239;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217241;
        _217241 = _217235 < sgap_217240;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217241) goto l217242; else goto l217664;
    l217664: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217244 = _217235;
        goto l217243;
    l217242: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217244 = sgap_217240;
        goto l217243;
    l217243: ;
        _217244 = p_217244;
        int _217659;
        _217659 = _217238;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217247;
        _217247 = *i_217246;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217248;
        _217248 = _217247;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217249;
        _217249 = (char)_217248;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217250;
        _217250 = _217249 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217250) goto l217251; else goto l217662;
    l217662: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217228 = _217659;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217257;
    l217251: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217213) goto l217252; else goto l217661;
    l217661: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217253;
    l217252: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217223 = _217659;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217253;
    l217253: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217255;
        _217255 = iai_cpy_217218 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217255) goto l217256; else goto l217653;
    l217653: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217654;
        _217654 = *i_217228;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217656;
        _217656 = _217654;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217228 = _217656;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217257;
    l217256: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217228 = _217244;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217257;
    l217257: ;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217561;
        _217561 = (int)_iai_217560;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217433;
        _217433 = *i_217228;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217435;
        _217435 = _217433;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217185 = _217435;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217437 = _217561;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217563;
        _217563 = *i_217427;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217260) goto l217261; else goto l217647;
    l217647: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217649;
        _217649 = *i_217648;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217651;
        _217651 = _217649;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217264 = _217651;
        goto l217262;
    l217261: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217264 = 4;
        goto l217262;
    l217262: ;
        sym_q_217264 = psym_q_217264;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217265;
        _217265 = 2 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217564;
        _217564 = _217563;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217565;
        _iai_217565 = (unsigned char)_217564;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217265) goto l217266; else goto l217645;
    l217645: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217269 = 4;
        piai_cpy_217270 = 4;
        goto l217267;
    l217266: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217269 = _iai_217565;
        piai_cpy_217270 = _iai_217565;
        goto l217267;
    l217267: ;
        sym_s_217269 = psym_s_217269;
        iai_cpy_217270 = piai_cpy_217270;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217271;
        _217271 = sym_q_217264 == sym_s_217269;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217271) goto l217272; else goto l217644;
    l217644: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217274 = -1;
        goto l217273;
    l217272: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217274 = 2;
        goto l217273;
    l217273: ;
        converge_217274 = pconverge_217274;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217276;
        _217276 = *i_217275;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217277;
        _217277 = _217276;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217278;
        score_217278 = _217277 + converge_217274;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217281;
        _217281 = *i_217280;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217282;
        _217282 = _217281;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217283;
        qgap_217283 = -1 + _217282;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217284;
        _217284 = score_217278 < qgap_217283;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217284) goto l217285; else goto l217643;
    l217643: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217287 = score_217278;
        goto l217286;
    l217285: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217287 = qgap_217283;
        goto l217286;
    l217286: ;
        _217287 = p_217287;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217290;
        _217290 = *i_217289;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217291;
        _217291 = _217290;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217292;
        sgap_217292 = -1 + _217291;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217293;
        _217293 = _217287 < sgap_217292;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217293) goto l217294; else goto l217642;
    l217642: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217296 = _217287;
        goto l217295;
    l217294: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217296 = sgap_217292;
        goto l217295;
    l217295: ;
        _217296 = p_217296;
        int _217637;
        _217637 = _217290;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217299;
        _217299 = *i_217298;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217300;
        _217300 = _217299;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217301;
        _217301 = (char)_217300;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217302;
        _217302 = _217301 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217302) goto l217303; else goto l217640;
    l217640: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217280 = _217637;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217309;
    l217303: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217265) goto l217304; else goto l217639;
    l217639: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217305;
    l217304: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217275 = _217637;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217305;
    l217305: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217307;
        _217307 = iai_cpy_217270 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217307) goto l217308; else goto l217631;
    l217631: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217632;
        _217632 = *i_217280;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217634;
        _217634 = _217632;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217280 = _217634;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217309;
    l217308: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217280 = _217296;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217309;
    l217309: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217428;
        _217428 = *i_217280;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217566;
        _217566 = (int)_iai_217565;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217430;
        _217430 = _217428;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217237 = _217430;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217432 = _217566;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217568;
        _217568 = *i_217422;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217311) goto l217312; else goto l217625;
    l217625: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217627;
        _217627 = *i_217626;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217629;
        _217629 = _217627;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217315 = _217629;
        goto l217313;
    l217312: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217315 = 4;
        goto l217313;
    l217313: ;
        sym_q_217315 = psym_q_217315;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217316;
        _217316 = 1 <= lower_216511;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217569;
        _217569 = _217568;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217570;
        _iai_217570 = (unsigned char)_217569;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217316) goto l217317; else goto l217623;
    l217623: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217320 = 4;
        piai_cpy_217321 = 4;
        goto l217318;
    l217317: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217320 = _iai_217570;
        piai_cpy_217321 = _iai_217570;
        goto l217318;
    l217318: ;
        sym_s_217320 = psym_s_217320;
        iai_cpy_217321 = piai_cpy_217321;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217322;
        _217322 = sym_q_217315 == sym_s_217320;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217322) goto l217323; else goto l217622;
    l217622: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217325 = -1;
        goto l217324;
    l217323: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217325 = 2;
        goto l217324;
    l217324: ;
        converge_217325 = pconverge_217325;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217327;
        _217327 = *i_217326;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217328;
        _217328 = _217327;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217329;
        score_217329 = _217328 + converge_217325;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217332;
        _217332 = *i_217331;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217333;
        _217333 = _217332;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217334;
        qgap_217334 = -1 + _217333;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217335;
        _217335 = score_217329 < qgap_217334;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217335) goto l217336; else goto l217621;
    l217621: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217338 = score_217329;
        goto l217337;
    l217336: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217338 = qgap_217334;
        goto l217337;
    l217337: ;
        _217338 = p_217338;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217341;
        _217341 = *i_217340;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217342;
        _217342 = _217341;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217343;
        sgap_217343 = -1 + _217342;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217344;
        _217344 = _217338 < sgap_217343;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217344) goto l217345; else goto l217620;
    l217620: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217347 = _217338;
        goto l217346;
    l217345: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217347 = sgap_217343;
        goto l217346;
    l217346: ;
        _217347 = p_217347;
        int _217615;
        _217615 = _217341;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217350;
        _217350 = *i_217349;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217351;
        _217351 = _217350;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217352;
        _217352 = (char)_217351;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217353;
        _217353 = _217352 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217353) goto l217354; else goto l217618;
    l217618: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217331 = _217615;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217360;
    l217354: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217316) goto l217355; else goto l217617;
    l217617: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217356;
    l217355: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217326 = _217615;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217356;
    l217356: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217358;
        _217358 = iai_cpy_217321 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217358) goto l217359; else goto l217609;
    l217609: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217610;
        _217610 = *i_217331;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217612;
        _217612 = _217610;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217331 = _217612;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217360;
    l217359: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217331 = _217347;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217360;
    l217360: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217423;
        _217423 = *i_217331;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217571;
        _217571 = (int)_iai_217570;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217425;
        _217425 = _217423;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217289 = _217425;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217427 = _217571;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217574;
        _217574 = *i_217573;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217362) goto l217363; else goto l217603;
    l217603: ;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217605;
        _217605 = *i_217604;
        #line 37 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _217607;
        _217607 = _217605;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217366 = _217607;
        goto l217364;
    l217363: ;
        #line 177 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_q_217366 = 4;
        goto l217364;
    l217364: ;
        sym_q_217366 = psym_q_217366;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217575;
        _217575 = _217574;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        bool _217367;
        _217367 = 0 <= lower_216511;
        #line 81 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        unsigned char _iai_217576;
        _iai_217576 = (unsigned char)_217575;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217367) goto l217368; else goto l217601;
    l217601: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217371 = 4;
        piai_cpy_217372 = 4;
        goto l217369;
    l217368: ;
        #line 178 "/home/fpga/anydsl/anyseq/src/align.impala"
        psym_s_217371 = _iai_217576;
        piai_cpy_217372 = _iai_217576;
        goto l217369;
    l217369: ;
        sym_s_217371 = psym_s_217371;
        iai_cpy_217372 = piai_cpy_217372;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217373;
        _217373 = sym_q_217366 == sym_s_217371;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217373) goto l217374; else goto l217600;
    l217600: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217376 = -1;
        goto l217375;
    l217374: ;
        #line 134 "/home/fpga/anydsl/anyseq/src/align.impala"
        pconverge_217376 = 2;
        goto l217375;
    l217375: ;
        converge_217376 = pconverge_217376;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217378;
        _217378 = *i_217377;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217379;
        _217379 = _217378;
        #line 48 "/home/fpga/anydsl/anyseq/src/align.impala"
        int score_217380;
        score_217380 = _217379 + converge_217376;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217383;
        _217383 = *i_217382;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217384;
        _217384 = _217383;
        #line 52 "/home/fpga/anydsl/anyseq/src/align.impala"
        int qgap_217385;
        qgap_217385 = -1 + _217384;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217386;
        _217386 = score_217380 < qgap_217385;
        #line 53 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217386) goto l217387; else goto l217599;
    l217599: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217389 = score_217380;
        goto l217388;
    l217387: ;
        #line 56 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217389 = qgap_217385;
        goto l217388;
    l217388: ;
        _217389 = p_217389;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217392;
        _217392 = *i_217391;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217393;
        _217393 = _217392;
        #line 59 "/home/fpga/anydsl/anyseq/src/align.impala"
        int sgap_217394;
        sgap_217394 = -1 + _217393;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        bool _217395;
        _217395 = _217389 < sgap_217394;
        #line 60 "/home/fpga/anydsl/anyseq/src/align.impala"
        if (_217395) goto l217396; else goto l217598;
    l217598: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217398 = _217389;
        goto l217397;
    l217396: ;
        #line 63 "/home/fpga/anydsl/anyseq/src/align.impala"
        p_217398 = sgap_217394;
        goto l217397;
    l217397: ;
        _217398 = p_217398;
        int _217593;
        _217593 = _217392;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217401;
        _217401 = *i_217400;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217402;
        _217402 = _217401;
        #line 137 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        char _217403;
        _217403 = (char)_217402;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217404;
        _217404 = _217403 == 0;
        #line 176 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217404) goto l217405; else goto l217596;
    l217596: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217382 = _217593;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217411;
    l217405: ;
        #line 83 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_217367) goto l217406; else goto l217595;
    l217595: ;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217407;
    l217406: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217377 = _217593;
        #line 179 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l217407;
    l217407: ;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _217409;
        _217409 = iai_cpy_217372 != 4;
        #line 180 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_217409) goto l217410; else goto l217587;
    l217587: ;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217588;
        _217588 = *i_217382;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217590;
        _217590 = _217588;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217382 = _217590;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217411;
    l217410: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217382 = _217398;
        #line 186 "/home/fpga/anydsl/anyseq/src/align.impala"
        goto l217411;
    l217411: ;
        #line 90 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217577;
        _217577 = (int)_iai_217576;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217418;
        _217418 = *i_217382;
        #line 84 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217420;
        _217420 = _217418;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217340 = _217420;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_217422 = _217577;
        #line 93 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        if (_216535) goto l217413; else goto l217585;
    l217585: ;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        pbufoff_217416 = bufoff_216512;
        goto l217414;
    l217413: ;
        #line 21 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int* i_217581;
        i_217581 = _183742_216381 + bufoff_216512;
        #line 95 "/home/fpga/anydsl/anyseq/src/iteration_hls.impala"
        int _217584;
        _217584 = 1 + bufoff_216512;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217579;
        _217579 = *i_216551;
        #line 44 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _217582;
        _217582 = _217579;
        #line 21 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        *i_217581 = _217582;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        pbufoff_217416 = _217584;
        goto l217414;
    l217414: ;
        bufoff_217416 = pbufoff_217416;
        #line 87 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int _217417;
        _217417 = 1 + lower_216511;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216511 = _217417;
        pbufoff_216512 = bufoff_217416;
        goto l216509;
    l216486: ;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        bool _216487;
        _216487 = lower_216484 < 16;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216487) goto l216488; else goto l216496;
    l216496: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216497;
        _216497 = lower_216484 - 16;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        bool _216498;
        _216498 = _216497 < 1;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216498) goto l216499; else goto l216503;
    l216503: ;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        goto l216489;
    l216499: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216501;
        i_216501 = &array_216500->e[_216497];
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216501 = 4;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        goto l216489;
    l216488: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216493;
        i_216493 = &array_216492->e[lower_216484];
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216493 = 4;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        goto l216489;
    l216489: ;
        #line 87 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int _216491;
        _216491 = 1 + lower_216484;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216484 = _216491;
        goto l216482;
    l216435: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216464;
        i_216464 = &array_216463->e[lower_216433];
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216456;
        _216456 = lower_216433 - 16;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216469;
        i_216469 = &array_216468->e[_216456];
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        bool _216457;
        _216457 = _216456 < 1;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        bool _216442;
        _216442 = lower_216433 < 16;
        #line 210 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        bool _216440;
        _216440 = lower_216433 < query_len_216439;
        #line 210 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        if (_216440) goto l216441; else goto l216472;
    l216472: ;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216442) goto l216473; else goto l216477;
    l216477: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216457) goto l216478; else goto l216480;
    l216480: ;
        #line 214 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216474;
    l216478: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216469 = 1;
        #line 214 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216474;
    l216473: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216464 = 1;
        #line 214 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216474;
    l216474: ;
        #line 215 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216446;
    l216441: ;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216442) goto l216443; else goto l216466;
    l216466: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216457) goto l216467; else goto l216471;
    l216471: ;
        #line 211 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216444;
    l216467: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216469 = 0;
        #line 211 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216444;
    l216443: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216464 = 0;
        #line 211 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216444;
    l216444: ;
        #line 215 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216446;
    l216446: ;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216442) goto l216448; else goto l216455;
    l216455: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216457) goto l216458; else goto l216462;
    l216462: ;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        goto l216449;
    l216458: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216460;
        i_216460 = &array_216459->e[_216456];
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216460 = 0;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        goto l216449;
    l216448: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216453;
        i_216453 = &array_216452->e[lower_216433];
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216453 = 0;
        #line 86 "/home/fpga/anydsl/runtime/src/runtime.impala"
        goto l216449;
    l216449: ;
        #line 87 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int _216451;
        _216451 = 1 + lower_216433;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216433 = _216451;
        goto l216431;
    l216391: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int _216412;
        _216412 = lower_216387 - 16;
        #line 87 "/home/fpga/anydsl/runtime/src/runtime.impala"
        int _216401;
        _216401 = 1 + lower_216387;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        bool _216393;
        _216393 = lower_216387 < 16;
        #line 23 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int* i_216402;
        i_216402 = _183743_216382 + _216401;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        bool _216413;
        _216413 = _216412 < 1;
        #line 23 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int _216403;
        _216403 = *i_216402;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216393) goto l216394; else goto l216424;
    l216424: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216413) goto l216425; else goto l216429;
    l216429: ;
        #line 149 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216395;
    l216425: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216427;
        i_216427 = &array_216426->e[_216412];
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216427 = top_cur_216388;
        #line 149 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216395;
    l216394: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216422;
        i_216422 = &array_216421->e[lower_216387];
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216422 = top_cur_216388;
        #line 149 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216395;
    l216395: ;
        #line 23 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        int _216405;
        _216405 = _216403;
        #line 147 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216393) goto l216397; else goto l216411;
    l216411: ;
        #line 148 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        if (_216413) goto l216414; else goto l216418;
    l216418: ;
        #line 150 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216398;
    l216414: ;
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216416;
        i_216416 = &array_216415->e[_216412];
        #line 45 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216416 = _216405;
        #line 150 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216398;
    l216397: ;
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        int* i_216409;
        i_216409 = &array_216408->e[lower_216387];
        #line 85 "/home/fpga/anydsl/anyseq/src/sysarr.impala"
        *i_216409 = _216405;
        #line 150 "/home/fpga/anydsl/anyseq/src/scoring_hls.impala"
        goto l216398;
    l216398: ;
        #line 84 "/home/fpga/anydsl/runtime/src/runtime.impala"
        plower_216387 = _216401;
        ptop_cur_216388 = _216405;
        goto l216385;
}

}

