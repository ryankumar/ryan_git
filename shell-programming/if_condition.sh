#!/bin/sh
var1=abc
var2=abc
# string comparision
if [ $var1 = $var2 ]
 then
  echo both are equal
 else
  echo both are not equal
fi
# all the statments betwwen COMMENT are commented
#argument comparision
<< COMMENT
   if [ $1 = $2 ]
   then
      if [ $# -ne 2 ]
	then
	 echo Error : less/more arguments
	exit 0
	fi
     echo both are equal
  else
  echo  both are not equal
 fi
COMMENT

# arithmatic comparision
<< COMMENT
 if [$# -eq 2]
   then
     echo \$1=$1,\$2=$2
  else
     echo Command Usage :$0 <$1><$2>
 fi
COMMENT
 exit 0

