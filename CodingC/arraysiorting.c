#include<stdio.h>

int main()
{
 int i,j,n,temp;
printf("enter size of array:-");
scanf("%d",&n);
int a[n];
printf("enter elements in array \n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("after sorting array:-\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}