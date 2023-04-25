#include<stdio.h>
int main()
{
  int x,sum=0;
  printf("enter your no");
  scanf("%d",&x);
  while(x!=0)
  {
   sum=sum+x;
   printf("enter your no");
  scanf("%d",&x);
   }
  printf("your sum is %d",sum);
  return 0;
 }
 
  