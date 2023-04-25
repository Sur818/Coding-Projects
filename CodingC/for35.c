#include<stdio.h>

int main()
{
 float i,j,m=0,fact=1,x=0,k;
int n;
printf("enterlast no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%.0f!/",i);
k=i;
 for(j=1;j<=i;j++)
{
  fact=fact*j;
printf("(%.0f)^3",(k));
if(j<=i)
{
printf("+");
}
m=m+(k)*(k)*(k);
k++;
}
printf("  +  ");
x=x+fact/m;
fact=1;
m=0;
}
printf("sum of the series is %.2f",x);
}
