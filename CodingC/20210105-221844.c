#include<stdio.h>

int ser(int n)
{
int i,j;
float m=0,sum=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
if(j<i)
{
printf("+");
}
m=m+j;
}
printf("/%d",i);
if(i<n)
{
printf(" + ");
}
sum=sum+m/i;
m=0;
}
printf("sum of seriese is %.2f",sum);
}
int main()
{
int n;
printf("enter last term");
scanf("%d",&n);
ser(n);
return 0;
}


