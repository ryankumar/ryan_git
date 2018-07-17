/* Write a currency program, that tells you how many number of 100, 50, 20, 10, 5, 2 and 1 Rs notes
will be needed for a given amount of money. For example if the total amount is Rs 545 then five 100
Rs notes, two 20 Rs note and one 5 Rs note will be needed. This sort of program can be used in ATM
machines.*/
 #include<stdio.h>
 int main()
{

int n,choice,notes;
printf("enter the total amount:");
scanf("%d",&n);
printf("enter the value of note from which you want to start:");
scanf("%d",&choice);
switch(choice)
{
case 100: notes=n/100;
          printf("total number of 100 notes:%d\n",notes);
	  n=n%100;
case 50: notes=n/50;
          printf("total number of 50 notes:%d\n",notes);
          n=n%50;
case 20: notes=n/20;
          printf("total number of 20 notes:%d\n",notes);
          n=n%20;
case 10: notes=n/10;
          printf("total number of 10 notes:%d\n",notes);
          n=n%10;
case 5: notes=n/5;
          printf("total number of 5 notes:%d\n",notes);
          n=n%5;
case 2: notes=n/2;
          printf("total number of 2 notes:%d\n",notes);
          n=n%2;
case 1: notes=n/1;
          printf("total number of 1 notes:%d\n",notes);
          n=n%1;
	  break;
default : printf("enter a valid choice\n");
}


}
