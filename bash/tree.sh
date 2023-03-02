#!/bin/bash

pip="|"
line="-"
tab="\t"
function mtree(){
	echo $pip
	for item in $1/*;
	do
		if [ -f $item ];
		then
			echo $pip $line$(basename $item)
		elif [ -d $item ];
		then
			echo $pip $line $(basename $item)
			mtree "$item" echo $pip
		fi
	done
}
mtree "$PWD"
