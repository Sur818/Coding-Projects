#include<stdio.h>
int main()
{
 int i,j,k,n;
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
for(j=i+1;j<n;j++)
{
for(k=j+1;k<n;k++)
{
if(a[i]+a[j]+a[k]==0)
{
printf("[%d,%d,%d]",a[i],a[j],a[k]);
}
}
}
}
return 0;
}