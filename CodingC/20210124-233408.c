#include<stdio.h>

int main()
{
 int arr[100];
int i,k=0,n,sum=1,sum1=1;
printf("enter no of term");
scanf("%d",&n);
for(i=1;k<=n;i++)
{
arr[k++]=i;
}
printf("1\n");
for(i=0;i<n;i++)
{
sum=sum+arr[i];
printf("%d\n",sum);
sum1=sum1+sum;
}
printf("sum of above series=%d",sum1);
return 0;
}
    