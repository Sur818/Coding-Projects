#include<stdio.h>    
int main()
{
int i,j,n,f,m;
printf("enter no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
 f=0;
for(j=2;j<=i/2;j++)
{
m=i%j;
if(m==0)
{
f=1;
}
}
if(f==0)
{
printf("%d ",i);
}
}
}
return 0;
}
