  #!/bin/sh   
<< COMMENT
 for file in *
    do
       if [ $file == $1 ]
      then
      echo $file
     fi
 done         
COMMENT
# file search from current directory
# if [ -f add_number.sh ]
  if test -f add_number.sh
#  if test -d array_file
 then 
echo "file is exist"
 else
 echo "file doesn't exist"
 fi

