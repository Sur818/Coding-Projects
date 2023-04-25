#include<stdio.h>

int fact( int n)
{
    int i,j,fact=1;
   for(i=n;i>=1;i--)

{
    printf("%d",i);
     if(i<=n&&i!=1) 
    {
      printf("*");
    }
     fact=fact*i;
         }
  
    printf("\nYour factorial is %11d",fact);
      }
     int main()
    {
        int n;
      printf("enter the no");
      scanf("%d",&n);
       fact(n);
    }
        
 
