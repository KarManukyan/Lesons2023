#!/bin/bash

file=$1
dest=$2
cp ()
{
if [[ -e $file ]]; then
    if [[ -f $file ]]; then
	cat $file > $dest
    fi
else
    echo "File not found."
fi
}
cp $file $dest
