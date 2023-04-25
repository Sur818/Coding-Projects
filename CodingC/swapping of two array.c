#include<stdio.h>

int main()
{
 int i,j,n,temp;
  printf("enter size of array");
  scanf("%d",&n);
  int a[n];
  int b[n];
 printf("enter element in array a[n]\n");
  for(i=0;i<n;i++)
   {
     printf("a[%d]=",i);
      scanf("%d",&a[i]);
    }
   printf("enter element in array b[n]\n");
    for(i=0;i<n;i++)
{ 
    printf("b[%d]=",i);
       scanf("%d",&b[i]);
    
}
  for(i=0;i<n;i++)
    {
   temp=a[i];
     a[i]=b[i];
      b[i]=temp;
    }
 printf("after array swapping\n");
printf("Elem in a[n]\n");
 for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
printf("element in b[n]\n");
 for(i=0;i<n;i++)
{
 printf("%d\n",b[i]);
}
  return 0;
}
 