#include<stdio.h>

int first(int n)
{
 int i,j,k,m;
for(i=1;i<=n/2+1;i++)
{
for(j=1;j<=i;j++)
{
printf(" ");
}
for(k=n/2+1;k>i;k--)
{
printf("*");
}
for(m=n/2+1;m>=i;m--)
{
printf("*");
}
printf("\n");
}
}

int second(int z)
{
first(z);
int i,j,k,m;
for(i=2;i<=z/2+1;i++)
{
for(j=z/2+1;j>=i;j--)
{
printf(" ");
}
for(k=2;k<=i;k++)
{
printf("*");
}
for(m=1;m<=i;m++)
{
printf("*");
}
printf("\n");
}
}
int main()
{
int n;
printf("enter odd no of row");
scanf("%d",&n);
second(n);
return 0;
}