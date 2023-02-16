#!/bin/bash
finde () {
	for i in $1/*; 
	do
		if [[ -f $i ]]; 
		then
			echo $i
		elif [[ -d $i ]]; 
		then
			echo $i
			finde $1
		fi
	done
}
finde "$1"
