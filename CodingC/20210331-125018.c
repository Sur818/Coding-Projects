#include<stdio.h>

int main()
{
int i,j,k,n,m;
printf("enter no of row");
scanf("%d",&n);
printf("enter no of collom");
scanf("%d",&m);
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
if(i==1&&j==1||i==1&&j==m||i==n&&j==1||i==n&&j==m)
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