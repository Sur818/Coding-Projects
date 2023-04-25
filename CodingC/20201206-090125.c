#include<stdio.h>

int main()
{
int i,n,c,a=-1,b=1,sum=0;
printf("enter last no of faboncce seriese");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 c=a+b;
 a=b;
  b=c;
  sum=sum+c;;
printf("%d\n",c);
}
printf("sum=%d",sum);
return 0;
}