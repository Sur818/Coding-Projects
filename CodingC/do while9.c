#include<stdio.h>

int main()
{
  int i,m,n,sum=0;
 printf("enter no");
scanf("%d",&n);
  i=1;
do
{
  m=n*i;
 printf("%d*%d=%d\n",n,i,m);
   sum=sum+m;
  i++;
} while (i<=10);
return 0;
}