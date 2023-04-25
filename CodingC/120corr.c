#include<stdio.h>

int main()
{
int b,c,i,sum=0,n,secmax,secmin;
printf("enter size of array");
scanf("%d",&n);
  int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
c=secmax=a[0];
b=secmin=a[0];
for(i=0;i<n;i++)
{
if(a[i]>b)
{
secmax=b;
b=a[i];
}
else if(a[i]<c)
{
secmin=c;
c=a[i];
}
}
printf("%d is  sec.max element\n",secmax);
printf("%d is sec.min element",secmin);
return 0;
}


    