#include<stdio.h>

int search(int a[],int n,int m)
{
  int i;
for(i=0;i<n;i++)
{
  if(a[i]==m)
   {
  printf("%dis at location%d",m,i+1);
   break;
}
}
if(i==n)
{
printf("%dis not present in array",m);
}
}
int main()
{
 int i,n,m;
printf("enter array size");
scanf("%d",&n);
int a[100];
printf("enter element in array\n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter element want to search");
scanf("%d",&m);
search(a,n,m);
}


