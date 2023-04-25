#include<stdio.h>

int main()
{
int b,c,i,sum=0,n;
printf("enter size of array");
scanf("%d",&n);
  int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
c=a[0];
b=a[0];
for(i=0;i<n;i++)
{
if(a[i]>b)
{
b=a[i];
}
else if(a[i]<c)
{
 c=a[i];
}
}
printf("%d is max element\n",b);
printf("%d is min element",c);
return 0;
}


    