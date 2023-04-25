#include<stdio.h>

int main()
{
 int i,j;
   int x[5];
  for(i=0;i<5;i++)
   {
   printf("enter element");
    scanf("%d",&x[i]);
    }
     
    for(i=4;i>=0;i--)
     {
      printf("%5d",x[i]);
    }
    
      


return 0;
}