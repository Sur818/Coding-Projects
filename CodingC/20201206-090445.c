#include<stdio.h>

int main()
{
int i,n,c,a=0,b=1,sum=0;
printf("enter terms in faboncce seriese");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 c=a+b;
 a=b;
  b=c;
  sum=sum+c;
printf("%d\n",c);
}
printf("sum of faboncce seriese=%d",sum);
return 0;
}