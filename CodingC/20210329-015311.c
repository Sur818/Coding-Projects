#include<stdio.h>

int main()
{
int i,j,k,n;
printf("enter even no of row");
scanf("%d",&n);
n=n/2;
for(i=1;i<=n;i++)
{
for(k=1;k<=i;k++)
{
printf(" ");
}
for(j=1;j<=2*n+1-2*i;j++)
{
printf("*");
}
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
printf("\n");
}
}