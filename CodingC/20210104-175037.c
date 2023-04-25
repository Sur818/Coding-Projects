#include<stdio.h>

int main()
{
int i,j,n,max=0,secondmax;
printf("size of array");
scanf("%d",&n);
int a[n];
max=a[0];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
if(a[i]>max)
{
secondmax=max;
max=a[i];
}
else 
{
 if(a[i]>max&&a[i]!=max)
{
secondmax=a[i];
}
}
}

printf("second max element is %d",secondmax);
return 0;
}



