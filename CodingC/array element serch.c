#include<stdio.h>

int main()
{
 int i,j,n,m;
printf("enter the size of array");
scanf("%d",&n);
int a[100];
printf("enter element in array\n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("which no want to search=");
scanf("%d",&m);
for(i=0;i<n;i++)
{
 if(a[i]==m)
{
  printf("%d no found at position%d",m,i+1);
 break;
}
}
if(i==n)
{
printf("element not found");
}
return 0;
}
