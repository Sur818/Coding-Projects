#include<stdio.h>

int fact( int n)
{
   float i,fact=1,sum=0,m,z=1;
  for(i=1;i<=n;i++)
   {
      m=i+1;
     printf("%.0f!/(%.0f+%.0f!)+",i,i,m);
      fact=fact*i;
        z=z*(i+1);
       sum=sum+fact/(i+(z));
     }
      printf("sum of factorial sereise=%.2f",sum);
    }
     int main()
    {
      int x;
      printf("enter the value of x"); 
      scanf("%d",&x);
       fact(x);
    }
    