#include<stdio.h>
int main()
{
int i,j,n,sum=0,prod=1;
printf("enter the name");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("(");
for(j=1;j<=i;j++)
{
printf("%d",j);
if(j<i)
{
printf("*");
}
prod=prod*j;
}
sum=sum+prod;
prod=1;
printf (")");
printf("+");
}
printf("=%d ",sum);
return 0;
}


    