 #include<stdio.h>
 #include"2calculator6.c"
 #include"2calculator2.c"
 #include"2calculator3.c"
 #include"2calculator4.c"
 #include"2calculator5.c"
 
 //float add(int,int);
 //float sub(int,int);
 //float mul(int,int);
 //float div(int,int);
 //float mod(int,int);
 int main()
   {
	int a,b;
	char ch;
	printf("enter the two number and character:");
	scanf("%d\n%c\n%d",&a,&ch,&b);
           
		switch(ch)
       		 {
		   case '+':
                	printf("addition of two number m,n,m+n:%d\t%d\t%f\n",a,b,add(a,b)); break;
 		   case '-':
	  		printf("substraction of two number m,n,m-n:%d\t%d\t%f\n",a,b,sub(a,b)); break;
		   case '*':
			printf("multiplication of two number m,n,m*n:%d\t%d\t%f\n",a,b,mul(a,b)); break;
		   case '/':
			printf("division of two number m,n,m/n:%d\t%d\t%f\n",a,b,div(a,b)); break;
		   case '%':
			printf("modulus  of two number m,n :%d\t%d\t%f\n",a,b,mod(a,b)); break;
    		   default :printf("entre a valid character\n");
		}
   }
float add(int a,int b)
   {
       
        return a+b;
   }


