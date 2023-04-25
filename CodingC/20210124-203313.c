#include<stdio.h>

int main()
{
 int arr[100];
int i,n,k=0,sum=1;
printf("enter no of term ");
scanf("%d",&n);
for(i=1;k<=n;i=i*2)
{
 arr[k++]=i;
}
printf("%d\n",arr[0]);
for(i=1;i<n;i++)
{
sum=sum+arr[i];
printf("%d\n",sum);
}
return 0;
}