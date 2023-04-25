#include<stdio.h>

int fact( int n)
{
   int i,fact=1,sum=0;
  for(i=1;i<=n;i++)
   {
     printf("%d!+",i);
      fact=fact*i;
       sum=sum+fact;
     }
      printf("sum of factorial sereise=%d",sum);
    }
     int main()
    {
      int x;
      printf("enter the value of x"); 
      scanf("%d",&x);
       fact(x);
    }
     