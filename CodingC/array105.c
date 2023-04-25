#include<stdio.h>
int main()
{
int i,j,n,temp;
printf("enter size of array");
scanf("%d",&n);
int a[n];
int b[n];
for(i=0;i<n;i++)
{
 printf("a[%d]=",i);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("after copy of element\n");
for(i=0;i<n;i++)
{
printf("b[%d]=%d\n",i,b[i]);
}
return 0;
}


   