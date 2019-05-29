# finding biggest 3 number
#!/bin/sh
if [ $# -ne 3 ]
 then
 echo "no.of arguments:$*"
 echo "Error:enter 3 arguments only"
	exit0
else
 echo no.of arguments:$*
 echo shell name:$0
 echo arguments are:$1,$2,$3
 if  [ $1 -gt $2 ] && [ $1 -gt $3 ] 
   then
	echo $1 is greater than $2 & $3
  elif [ $2 -gt $3 ]
	 then 
	    echo  $2 is greater than $1 and $3
	else
	    echo $3 is greater than $2 & $1
     fi
 fi
