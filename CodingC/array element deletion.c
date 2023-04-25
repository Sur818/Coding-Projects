#include<stdio.h>

int main()
{
 int i,j,n,m;
  printf("enter the size of array");
   scanf("%d",&n);
  int x[n];
  for(i=0;i<n;i++)
{
  printf("x[%d]=",i);
   scanf("%d",&x[i]);
  }
  printf("enterd array is\n");
  for(i=0;i<n;i++)
{
  printf("%d\n",x[i]);
}
  
printf("which no element want to delete");
  scanf("%d",&m);
for(i=m-1;i<n-1;i++)
  {
  x[i]=x[i+1];
  }
 for(i=0;i<n-1;i++)
  {
 printf("%d\n",x[i]);
}
return 0;
}

