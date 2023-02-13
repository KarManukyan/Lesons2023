#!/bin/bash

while read line; do
  if [[ -n $line ]]; then
	echo $line >> Newfile
  fi
done < $1
cat Newfile > $1
rm Newfile

