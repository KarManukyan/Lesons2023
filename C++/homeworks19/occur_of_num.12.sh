#/usr/bin/bash

g++ occur_of_num.12.cpp

if [[ $? -eq 0 ]]				# checking comilation status and run script
then
	echo "Compilation successful."
	echo "-------------------------------------------------"
else
	echo "Compilation failed."
fi

if [[ $1 -eq "-t" ]]					# checking arguments and run script with argument
then
	./a.out $1
else
	./a.out
	if diff Result.txt Golden_answers		# checking differenses in result file with Golden answer
	then 
		echo "-------------------------------------------------"
		echo "Done !!!"
	else
		echo "-------------------------------------------------"
		echo "Fail !!!"
		diff Result.txt Golden_answers
	fi
fi	
