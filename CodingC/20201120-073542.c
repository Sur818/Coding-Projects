#include<stdio.h>
int main()
{
 float i,j,n,m=0,sum=0,fact=1;
printf("enter the no");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%.0f",j);
if(j<i)
{
printf("+");
}
}
printf("/%.0f!  +  ",i);
fact=fact*i;
sum=sum+i;
m=m+sum/fact;
}
printf("sum of seriese is%.2f",m);
return 0;
}