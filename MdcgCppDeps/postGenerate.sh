#!/bin/bash
cd libs
git submodule add git@github.com:MickaelOnTheWave/BasicToolsLib.git

fullPath=`pwd`
absoluteScriptPath=$fullPath/postGenerate.sh
rm -f $absoluteScriptPath
