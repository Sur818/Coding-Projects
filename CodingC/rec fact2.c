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
float x,sum=0,m;
printf("enter last no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("1/%d!",i);
if(i<n)
{
printf("+");
}
x=fact(i);
sum=sum+1/x;
}
printf("=%.6f",sum);
return 0;
}


