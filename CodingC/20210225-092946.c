#include<stdio.h>
int main()
{
 int i,n,m;
printf("enter size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("which position no wants to delete");
scanf("%d",&m);
for(i=m-1;i<n;i++)
{
a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}