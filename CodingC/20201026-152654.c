#include<stdio.h>

int main()
{
  int i,n,j,temp;
  printf("enter size of array");
   scanf("%d",&n);
   int x[n];
 printf("enter elements in array\n");
 for(i=0;i<n;i++)
{
 printf("x[%d]=",i);
  scanf("%d",&x[i]);
   }
  printf("after sorting\n");

  for(i=0;i<n;i++)
   {
   for(j=0;j<n-1;j++)
{
   if(x[j]>x[j+1])
    {
       temp=x[j];
        x[j]=x[j+1];
         x[j+1]=temp;
        }
        }
        }
        for(i=0;i<n;i++)
        {
         printf("%d\n",x[i]);
        }
        return 0;
        }
        