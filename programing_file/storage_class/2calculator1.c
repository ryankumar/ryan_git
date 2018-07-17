 #include<stdio.h>
 #include"2calculator2.c"
 #include"2calculator3.c"
 #include"2calculator4.c"
 #include"2calculator5.c"
 #include"2calculator6.c"
 #include"2calculator7.c"
 
 int a,b;
  float op;
  int main()
  {
    char ch;
	printf("enter the character and value\n");
	scanf("%c%d%d",&ch,&a,&b);
	switch(ch)
	 {
	    case '+': op=add();
			break;
	    case '-': op=sub();
			break;
	    case '*': op=mul();
			break;
	    case '/': op=div();
			break;
	    case '%': op=mod();
			break;
	    default:printf("enter a valid character\n");
  	}
	printf("output is:%f\n",op);
   }
