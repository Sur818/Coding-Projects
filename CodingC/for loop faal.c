#include<stdio.h>

int main()
{
  int i,j,n,m,fact=1,sum=0;
    printf("enter the no");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
     {
      printf("%d!",i);
      if(i<n)
    {
      printf("+");
    }
      fact=fact*i;
 sum=sum+fact;

 }

  printf("sum of factorial is %d=",sum);
  return 0;
}