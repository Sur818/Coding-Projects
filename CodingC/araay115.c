#include<stdio.h>

int main()
{
 int i,j,m,n,z;
printf("enter size of array");
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
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





