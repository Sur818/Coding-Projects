#include<stdio.h>

int main()
{
int i,j,k,t,n;
printf("enter row");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(k=1;k<=n-i;k++)
{
printf("  ");
}
for(t=1;t<=i;t++)
{
printf("*");
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("*");
}
for(k=i;k<=n-1;k++)
{
printf("  ");
}
for(t=i;t>=1;t--)
{
printf("*");
}
printf("\n");
}
return 0;
}

