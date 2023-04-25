#include<stdio.h>

int main()
{
 int i,j,k;
   int x[4][4];
     int sum=0;
 for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("x[%d][%d]=",i,j);
       scanf("%d",&x[i][j]);
      sum=sum+x[i][j];
    }
    for(j=3;j<4;j++)
    {
      x[i][j]=sum;
    }
    
     sum=0;
    printf("\n");
    
   }
    
    for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
      {
      printf("%d  ",x[i][j]);
    }
    printf("\n");
    }
    return 0;
    }
    
      