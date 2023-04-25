#include<stdio.h>

int main()
{
int i,j,k,t;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(k=1;k<=3;k++)
{
printf(" ");
}
for(t=5;t>=i;t--)
{
printf("*");
}
printf("\n");
}

return 0;
}

