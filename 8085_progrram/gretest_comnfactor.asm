
;<Program title>
mvi a,98
mvi b,56

cmp b
jz 421ch

cmp b
jnc 4210h

cmp b
jc 4214h

sub b
jmp 4204h

 mov c,a
 mov a,b
 sub b
 mov b,a
 mov a,c
jmp 4204h

mov b,a
hlt
