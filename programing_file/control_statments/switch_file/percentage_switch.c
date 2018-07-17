#include<stdio.h>
int main()
{

int a,b,c,d,e,f,sum,n;
float per;
printf("enter the 6 subjects marks");
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
sum=a+b+c+d+e+f;
per=(float)sum/600*100;
n=per/10;
printf("percentage is:%f\n",per);
printf("print the value of :%d\n",n);
switch(n)
{

case 0:
case 1:
case 2:
case 3: printf("fail");
       break;
case 4:
case 5:printf("third class");
       break;
case 6:printf("second class");
      break;
case 7:printf("first class");
	break;
case 8:
case 9:printf("honour");
 	break;
case 10:
printf("out standing");
	break;

default:printf("call your parent");
	

}
	return 0;
}

/*it can be written with nested switch condition also:

switch(per>=80 && per<=100)
{
case 1:printf("Distinction\n");
break;
case 0:
        switch(per>=70 && per<80)
        {
        case 1:printf("First class\n");
        break;
        case 0:
                switch(per>=60 && per<70)
                {
                case 1:printf("Second class\n");
                break;
                case 0:
                        switch(per>=40 && per<60)
                        {
                        case 1:printf("third class\n");
                        break;
                        case 0:
                                switch(per<40)
                                {
                                case 1:printf("fail");
                                        break;
                                case 0:printf("it needs correction");
                                }

                        }
                }
        }
}

