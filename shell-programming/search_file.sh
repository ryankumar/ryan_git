#searching file from current directory
#!/bin/sh
for file in *
do
	if grep -l add*  $file  # searching file of add related files 
	then
		echo $file
	fi
done
