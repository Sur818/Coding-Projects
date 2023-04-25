#include<stdio.h>
int main()
{
int i,j,k,m;
for(i=1;i<=10;i++)
{
for(j=2;j<=6;j++)
{
m=j*i;
printf("%d\t",m);
}
printf("\n");
}
return 0;
}