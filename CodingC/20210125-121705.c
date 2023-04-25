#include<stdio.h>

int main()
{
 int arr1[100];
int arr2[10000];
int i,k=1,j=1,n,sum=1,sum1=1;
printf("enter no of term");
scanf("%d",&n);
for(i=1;k<n;i++)
{
if(i%2!=0)
{
arr1[k++]=2;
}
else
 {
arr1[k++]=j++;
}
}

arr1[0]=1;
for(i=1;i<n;i++)
{
if(i%2==0)
{
sum=sum+arr1[i];
arr2[i]=sum;
}
else
{
sum=sum*arr1[i];
arr2[i]=sum;
}
}

sum=2;
printf("1\n");
for(i=0;i<n;i++)
{
sum=sum+arr2[i];
printf("%d\n",sum);
sum1=sum1+sum;
}
printf("sum of seriese=%d\n",sum1);
return 0;
}