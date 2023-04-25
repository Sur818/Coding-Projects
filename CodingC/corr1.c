#include<stdio.h>

int main()
{
 int i,j,temp,n;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=arr[i];
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
printf("%d=max element\n",arr[n-1]);
printf("%d=min element",arr[0]);
return 0;
}


