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
printf("%d/[",i);
for(j=1;j<=i;j++)
{
m=m+j*j;
printf("%d^2",j);
if(j<i)
{
printf("+");
}
}
printf("] + ");
sum=sum+x/m;
m=0;
}
printf("=%.2f",sum);
return 0;
}
