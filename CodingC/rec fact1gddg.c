#include<stdio.h>
int ser(int n,int i)
{
if(i==1) 
{
printf("1+");
return 1;
}
else if(i>1)
{
printf("%d*",i);
return i*ser(n,i-1);
}
}
int main()
{
int i,n,x,sum=0;
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