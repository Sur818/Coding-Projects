#include<stdio.h>

int main()
{
 int i,j,k,m,count=0;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(m=1;m<=5-i;m++)
{
printf("  ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
for(i=2;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(m=1;m<=5-i;m++)
{
printf("  ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}

