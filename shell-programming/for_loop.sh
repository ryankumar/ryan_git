#for loop implementation
#!/bin/sh
read var
rev =0
rem =0
mod =0
for x in 1 2 3
do
	rem =`expr $var % 10`
	mod =`expr $rem * 10`
	rev =`expr $rev + $mod`
	echo rem = $rem 
	#rev =  $(( $rev * 10 + $rem ))
	continue
done
echo reverse no.is $rev
