#include<stdio.h>

int main()
{
  int i,j,n,m,k;
printf("enter row");
scanf("%d",&m);
n=m/2;
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

return 0;
}
