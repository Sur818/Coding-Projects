#include<stdio.h>

int main()
{
int i,n;
printf("enter size of array\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("even element=");
printf("%d\n",a[i]);
}
else
{
printf("Odd element=");
printf("%d\n",a[i]);
}
}
return 0;
}

 