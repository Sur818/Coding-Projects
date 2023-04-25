#include<stdio.h>

int fact(int n)
{
if(n==0)
{
return 1;
}
else
{
return n*fact(n-1);
}
}
int main()
{
int i,n,j;
float x,sum=0,m=0;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
x=fact(i);
for(j=1;j<=i;j++)
{
m=m+j;
printf("%d",j);
if(j<i)
{
printf("+");
}
}
printf("/%d! + ",i);
sum=sum+m/x;
m=0;
}
printf("=%.9f",sum);
return 0;
}
