#include<stdio.h>

int main()
{
 float i,j,m=0,fact=1,x=0;
for(i=1;i<=3;i++)
{
printf("%.0f!/",i);
 for(j=1;j<=i;j++)
{
  fact=fact*j;
printf("(%.0f)^3",j);
if(j<i)
{
printf("+");
}
m=m+j*j*j;
}
printf("  +  ");
x=x+fact/m;
fact=1;
m=0;
}
printf("sum of the series is %.2f",x);
}
