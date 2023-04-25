#include<stdio.h>

int main()
{
 int i,j,m,n,z;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("size of second array\n");
scanf("%d",&m);
int c[m];
int b[n+m];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
b[i]=a[i];
}
printf("\n");
j=n;
for(i=0;i<m;i++)
{
printf("c[%d]=",i);
scanf("%d",&c[i]);
b[j]=c[i];
j++;
}
for(i=0;i<n+m;i++)
{
printf("%d\n",b[i]);
}
return 0;
}






