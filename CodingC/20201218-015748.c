#include<stdio.h>

int main()
{
  int a[5];
int i,sum=0;
for(i=0;i<5;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
if(i%2==0)
sum=sum+a[i];
}
printf("sum of all even index element sum is  ");
printf("%d",sum);
}
