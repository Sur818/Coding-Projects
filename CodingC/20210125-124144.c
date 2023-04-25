#include<stdio.h>

int main()
{
 int arr[100];
int i,k=0,n,sum=0;
printf("enter no");
scanf("%d",&n);
for(i=1;k<n;i++)
{
arr[k++]=i;
}
printf("%d\n",arr[0]);
sum=arr[0];
for(i=0;i<n;i++)
{
if(i%2==0)
sum=sum+arr[i];
else
sum=sum*arr[i];
printf("%d\n",sum);
}
return 0;
}
