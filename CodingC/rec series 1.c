#include<stdio.h>
int ser(int n,int i)
{
int prod=1;
if(i==0)
{
return 0;
}
else if(i>=1)
{
printf("%d",i);
if(i==1)
{
printf(" + ");
}
if(i>1)
{
printf("+");
}
return i+ser(i,i-1);
}
}
int main()
{
int i=1,n,x,sum=0;
printf("enter last term");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
x=ser(n,i);
sum=sum+x;
}
printf("=%d",sum);
return 0;
}