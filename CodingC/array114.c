#include<stdio.h>

int main()
{
 int i,j,m,n,z,temp;
printf("enter size of array");
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("which no want to insert");
scanf("%d",&m);
printf("which posn");
scanf("%d",&z);
for(i=n;i>z-1;i--)
{
a[i]=a[i-1];
}
a[z-1]=m;
for(i=0;i<n+1;i++)
{
printf("%d\n",a[i]);
}
return 0;
}





