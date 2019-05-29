#!/bin/sh
rm -rf fred*
echo > fred1  # create fread1 file
echo > fred2 # create fread2 file
mkdir fred3  # create fread3 directory
echo > fred4 # create fread4 file

for file in fred*
do
if [ -d “$file” ]; then
echo “skipping directory $file”
continue
fi
echo file is $file
done
rm -rf fred*
exit 0
