#!/bin/sh
myvar="hi there"
#system defined variables
echo shell pid : $$
echo \$USER :	$USER
echo \$SHELL:	$SHELL
echo \$PWD  :	$PWD
echo \$HOME :   $HOME
echo \$PATH :	$PATH
echo \$PS1  :	$PS1
#user defined variables

echo $myvar
echo "$myvar"
echo '$myvar'
echo \$myvar
echo \$myvar : $myvar
read myvar
exit 0
