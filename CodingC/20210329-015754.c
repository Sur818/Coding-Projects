#include<stdio.h>

int main()
{
int i,j,k,n;
printf("enter even no of row");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
printf(" ");
}
for(k=1;k<=n;k++)
{
printf("*");
}
printf("\n");
}
}