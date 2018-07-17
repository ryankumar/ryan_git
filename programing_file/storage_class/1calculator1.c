 #include<stdio.h>
 #include"1calculator2.c"
 #include"1calculator3.c"
 #include"1calculator4.c"
 #include"1calculator5.c"
 #include"1calculator6.c"
 #include"1calculator7.c"
 
   int a,b;
  int main()
  {
    char ch;
    float op;
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
