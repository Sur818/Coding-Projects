#include<stdio.h>

int main()
{
int i,k=0,sum=1,n,sum1=1;
int arr[100];
printf(" enter no of term ");
scanf("%d",&n);
for(i=1;k<n;i=i*2)
{
arr[k++]=i;
}
printf("1\n");
for(i=1;i<n;i++)
{
sum=sum+arr[i];
printf("%d\n",sum);
sum1=sum1+sum;
}
printf("sum of seriese=%d",sum1);
return 0;
}