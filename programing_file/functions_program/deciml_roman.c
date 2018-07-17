 #include<stdio.h>
 int conv(int,int,char);
 int main()
  {
      int n;
   printf("enter the number:");
   scanf("\n%d",&n);
   if(n>=1000)
	n=conv(n,1000,'m');
   if(n>=500)
        n=conv(n,500,'d');
   if(n>=100)
	n=conv(n,100,'c');
   if(n>=50)
	n=conv(n,50,'l');
   if(n>=10)
	n=conv(n,10,'x');
   if(n>=5)
	 n=conv(n,5,'v');
   if(n>=1)
         n=conv(n,1,'i');
      printf("\n");
    return 0;
  }
     
  int conv(int n,int k,char ch)
    {
      if(n==4)
 {	printf("iv");return 0 ;}
      if(n==9)
{        printf("ix");return 0;}
       while(n>=k)
	{
	  printf("%c",ch);
	  n=n-k;
       }
//	return n;
    }
        
