#include<stdio.h>

int table(int x,int y)
{
   return x*y; 
}
  int main()
{
  int i,n,m,sum=0;
  printf("enter the no");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
   m=n*i;
   printf("%d*%d=%d\n",n,i,m);
  sum=sum+table(n,i);
}
  printf("sum of table is %d",sum);
}
 
   