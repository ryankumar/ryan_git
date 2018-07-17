#!/bin/sh

if [ $# -ne 2 ]
 then
  echo "Command Usage:./add_number.sh <$1> <$2>"
	exit0
 else
   
IFS='+'

echo "no. of arguments:$#"
echo "shell name:$0"
echo "2nd arguments name:$1"
echo "3rd arguments name:$2"
echo "addition of two argument:$*=$(($1+$2))"
echo "addition of two argument:$@=$(($1+$2))"
fi
