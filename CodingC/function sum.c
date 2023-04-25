#include<stdio.h>

int add(int x,int y)
{
   return x+y; 
}
  int main()
{
  int i,n,m,sum=0;
  printf("enter the no");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   
   printf("%d",i);

    if(i<n)
     {
      printf("+");
    }
    
  sum=sum+add(i,0);
}
  printf("\nsum of no till  n %d",sum);
}
 
   