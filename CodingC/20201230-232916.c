#include<stdio.h>

int pattern(int t)
{
  int i,j,n,m,k,p;
printf("enter odd row");
scanf("%d",&m);
n=m/2+1;
for(p=1;p<=t;p++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
 printf("*");
}
if(i!=n)
{
printf("\n");
}
}
for(i=1;i<=n;i++)
{
if(i>1)
{
for(j=1;j<n+i;j++)
{
 printf(" ");
}
}
for(k=(n+1)-i;k>=1;k--)
{
printf("*");
}
printf("\n");
}
}
}
int main()
{
int t;
printf("enter repetition value");
scanf("%d",&t);
pattern(t);
return 0;
}
