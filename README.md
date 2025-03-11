# Qt Creator Project Wizard Templates

## Description

The folders in this repository contains project wizards for Qt Creator. 

They are used to ease the process of creating new projects using my personal standards, but
can probably be used as examples to generate your own templates.
Here are some of their characteristics :
- They use exclusively Cmake. The build system selection has been completely removed.
- Sources are in src/ folder and dependencies in libs/ folder
- Some of them come preconfigured to use dependencies to some of my libraries

## Install Script

The installation script that is at the root of the project is a simple automation tool.
It automates updating the QtCreator project template folder with the current repository.
