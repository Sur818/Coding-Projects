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
int i,n;
float x,sum=0;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("(%d*%d)/%d!",i,i,i);
if(i<n)
{
printf("+");
}
x=fact(i);
sum=sum+i*i/x;
}
printf("=%.3f",sum);
return 0;
}
