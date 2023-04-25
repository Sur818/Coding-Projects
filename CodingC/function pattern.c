#include<stdio.h>

int first(int n)
{
int i,j,k;
for(i=1;i<=n/2;i++)
{
for(j=i;j<=n/2;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
}
int second(int z)
{
int i,j,k;
first(z);
for(i=z/2;i>=1;i--)
{
for(j=i;j<=z/2;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
}
int main()
{
int n,m;
printf("enter row");
scanf("%d",&n);
second(n);
return 0;
}

