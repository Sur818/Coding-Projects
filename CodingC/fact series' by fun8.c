#include<stdio.h>

int fact(int n)
{ 
 float i,j,fact=1,sum=0;
 for(i=1;i<=n;i++)
  {
    j=(i+1);
   printf("%.0f/%.0f!+",i,j);
    fact=fact*j;
  sum=sum+i/fact;
   }
 printf("sum of factorial sereise is %.2f",sum);
  }

 int main()
{
   int n;
  printf("enter value of n");
  scanf("%d",&n);
   fact(n);
}
  
