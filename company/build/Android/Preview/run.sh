#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.35.6/Targets/Android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "company"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "company.apk" \
    --package=com.apps.company \
    --activity=company \
    --sym-dir="company/app/src/main/.uno" \
    "$@"
