#include<stdio.h>

int main()
{
  int i,j,n,m,z=1;
  printf("enter the no of row");
  scanf("%d",&n);
  
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    
    {
    
    printf("%d ",z);
    z++;
    }
     printf("\n");
    }
    return 0;
    }