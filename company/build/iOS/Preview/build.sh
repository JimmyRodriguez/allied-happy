#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.35.6/Targets/iOS/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

mkdir -p data

##if #(Cocoapods:Defined)
#pod install
#xcodebuild -workspace "#(Project.Name).xcworkspace" -scheme "#(Project.Name)" -derivedDataPath build
#exit $?
##endif

xcodebuild -project "company.xcodeproj"
