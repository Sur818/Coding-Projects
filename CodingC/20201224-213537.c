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
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d!/[(%d^2)+(%d^2)]",i,i,i+1);
if(i<n)
{
printf(" + ");
}
x=fact(i);
m=i*i+(i+1)*(i+1);
sum=sum+x/m;
}
printf("=%.9f",sum);
return 0;
}
