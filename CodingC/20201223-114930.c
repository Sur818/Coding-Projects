#include<stdio.h>

int main()
{
  int i,n,m;
printf("enter no size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("which PSN Elem want to delete");
scanf("%d",&m);
i=m-1;
do
{
a[i]=a[i+1];
i++;
}while(i<n);
n--;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}


