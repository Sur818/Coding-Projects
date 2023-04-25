#include<stdio.h>

int main()
{
int i,k=0,sum=1,n,sum1=1;
int arr[100];
int arr2[100];
printf(" enter no of term ");
scanf("%d",&n);
for(i=1;k<n;i++)
{
arr[k++]=i;
}
arr2[0]=1;
k=1;
for(i=0;i<n;i++)
{
sum=sum+arr[i];
arr2[k++]=sum;
//printf("%d\n",sum);
}
sum=1;
printf("1\n");
for(i=0;i<n-1;i++)
{
sum=sum+arr2[i];
printf("%d\n",sum);
sum1=sum1+sum;
}
printf("sum of obove seriese=%d",sum1);
return 0;
}