#!/bin/sh
for file in *
do
     if grep -l add* $file  # searching file of add related files 
    #if grep -l biggest_* $file  # searching file of add related files 
   then
   echo $file
  fi
done
