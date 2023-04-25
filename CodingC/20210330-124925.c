#include<stdio.h>

int main()
{
int i,j,k,n;
printf("enter no of row");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=n;j++)
{
if(i==j)
{
printf(" ");
}
else
{
printf("*");
}
}
printf("\n");
}
}