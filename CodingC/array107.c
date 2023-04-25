#include<stdio.h>
int main()
{
int i,n,k,j,count=0,temp;
printf("enter size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
 printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j+1]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
if(a[i]==a[i+1])
{
count++;
}
}
printf("no of duplicate element is %d",count);
return 0;
}


   