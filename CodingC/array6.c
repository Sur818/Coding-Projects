#include<stdio.h>

int main()
{
  int i,j,n,m;
printf("enter size off array");
scanf("%d",&n);
 int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("which position no want to delete");
scanf("%d",&m);
for(i=m-1;i<n-1;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
return 0;
} 