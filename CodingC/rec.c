#include<stdio.h>

int main()
{
 int i,a=-1,b=1,c,sum=0;
for(i=1;i<=10;i++)
{
 c=a+b;
 a=b;
 b=c;
sum=sum+c;
printf("%d\n",c);
}
printf("sum of seriese is%d",sum);
return 0;
}
