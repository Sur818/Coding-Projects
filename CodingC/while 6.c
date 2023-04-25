#include<stdio.h>

int main()
{
 int i,j,sum=0,n,m;
 printf("enter last no");
scanf("%d",&n);
i=1;
while(i<n)
{
  m=(i+1);
 printf("(%d*%d)+",i,m);
  sum=sum+i*m;
  i++;
   
}
 printf("your sum is %d",sum);
return 0;
}