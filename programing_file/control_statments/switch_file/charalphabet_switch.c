#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("\n%c",&ch);
                 
     switch(ch>='A' && ch<='Z')
     {
	case 1:printf("character is an alphabet:%c\n",ch);
	       break;
	case 0:
		switch(ch>='a' && ch<='z')
		{
		case 1:printf("character is an alphabet:%c\n",ch);
			break;
		case 0:printf("it is a special character:%c\n",ch);
		}
     }
return 0;

}
