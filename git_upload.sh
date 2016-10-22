#!/bin/sh

#all file upload
git add -A

if [ $# != 0 ]; then
    git commit -m "$1 `date '+%Y_%m_%d_%H:%M:%S'`"
else
    git commit -m "`date '+%Y_%m_%d_%H:%M:%S'`"
fi

git push -u origin master
