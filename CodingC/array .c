#include<stdio.h>

int maxmin(int a[],int n)
{
int i,j,max,min;
max=min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
   max=a[i]; 
}
else if(a[i]<min)
{
min=a[i];
}
}
printf("%d=max element\n",max);
printf("%d=min element",min);
}
int main()
 {
  int i,n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
maxmin(a,n);
}
 