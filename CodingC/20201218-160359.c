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
if(a[i]==a[i+1])
{
for(j=i;j<n;j++)
{
 a[j]=a[j+1];
}
n--;
i--;
}
}
printf("unique elements are\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}


   