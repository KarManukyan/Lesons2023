#!/bin/bash

select comand in "Currently logged users" "Your shell directory" "Home directory" "OS name and version" "Current working directory" "Number of users logged in" "Show all available shells in your system" "Hard disk information" "CPU information" "Memory information" "File system information" "Currently running process" "Quit"
do
    case $comand in
            "Currently logged users")
                     whoami;;
            "Your shell directory")
                    echo $SHELL;;
            "Home directory")
                    echo "$HOME";;
            "OS name and version")
		    cat /etc/os-release;;
	    "Current working directory")
                    pwd;;
	    "Number of users logged in")
                     who -q;;
	    "Show all available shells in your system")
                    cat /etc/shells;;
	    "Hard disk information")
                    lsblk;;
	    "CPU information")
                    lscpu;;
	    "Memory information")
                    free;;
	    "File system information")
                    df -Th;;
	    "Currently running process")
                    ps -aux;;
	    "Quit")
		    echo "Quit"
		    break
	    esac

done
