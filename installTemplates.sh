#!/bin/bash

templateDir="$HOME/.config/QtProject/qtcreator/templates/wizards/projects"

rm -Rf "${templateDir}"/*
cp -r MdcgCpp "${templateDir}/"

