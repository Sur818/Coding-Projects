#include<stdio.h>

int main()
{
int arr[100];
int n,i,j,k=0,prod=1,sum1=1;
printf("enter no of term");
scanf("%d",&n);
for(i=1;k<n;i=i*2)
{
arr[k++]=i;
}
printf("1\n");
for(i=0;i<n-1;i++)
{
prod=prod*arr[i];
printf("%lld\n",prod);
sum1=sum1+prod;
}
printf("sum of above series=%d",sum1);
return 0;
}

