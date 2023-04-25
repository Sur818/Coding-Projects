#include<stdio.h>

int main()
{
 int i,j,n;
   
   int x[100];
  printf("enter value of n");
   scanf("%d",&n);
   
  for(i=0;i<n;i++)
   {
   
    x[i]=i;
    }
     
    for(i=n-1;i>=0;i--)
     {
      printf("%5d",x[i]);
    }
    
      


return 0;
}