#include<stdio.h>
int lateststock(void);
int sell(int);
int purchase(int);
int stock1,max;
int main()
 {
      int a,s,p,n;
         int ts=0,tp=0,se,pur;
	printf("entre the max stock: ");
	scanf("%d",&max);           
	stock1=max;
		while(1)
	   {
		printf("enter the choice\n:1.stock\n 2.sell\n 3.purchase\n and for close press any key\n ");
	   	scanf("%d",&n);
		switch(n)
		{
		  case 1:a=lateststock();
			 printf("lateststock is:%d\n",a);
			 break;
		  case 2:printf("n0.of product want to sell: ");
			 scanf("%d",&se);
			 s=sell(se);
			 ts=ts+s;
			 printf("no. of product selling is:%d\n",s);
			 break;
		  case 3:printf("no.of product want to purchase: ");
			 scanf("%d",&pur);
			 p=purchase(pur);
			 tp=tp+p;
			 printf("number of product purchase is:%d\n",p);
			 break;
		  default:printf("it's time for closing \n");
			 printf("total stock is:%d\n",lateststock());
			 printf("total selling is:%d\n",ts);
			 printf("total purchase is:%d\n",tp);
			 goto end;
   		}
	 }
	end:printf("good night\n");
    return 0;
 }
