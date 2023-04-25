#include<stdio.h>

int main()
{
  int x[100],y[100],i,n; 
  printf("enter size of array");
  scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("x[%d]=",i);
  scanf("%d",&x[i]);
}
  for(i=0;i<n;i++)
{
y[i]=x[i];
}
 printf("coppied elemnt in second array\n");
for(i=0;i<n;i++)
{
printf("y[%d]=",i);
 printf("%d\n",y[i]);
 }
return 0;
}