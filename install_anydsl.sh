#!/bin/bash

anydsldir=..

if [ $# -gt 0 ]; then
    anydsldir=$1
fi

anydsldir=$anydsldir/anydsl
echo "dir: $anydsldir"

# clone anydsl repo
git clone git@github.com:AnyDSL/anydsl.git $anydsldir
cd $anydsldir

# configure the build
cp config.sh.template config.sh
threads=$( nproc )

sed -i -e "s/make -j4/make -j${threads}/" config.sh
sed -i -e "s/BUILD_TYPE:=Debug/BUILD_TYPE:=Release/" config.sh

cat config.sh

# install anydsl
./setup.sh

