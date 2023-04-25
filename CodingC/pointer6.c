#include<stdio.h>

int add(int*n)
{
  int i,sum=0;
  for(i=0;i<*n;i++)
{
  if(i%2==0)
{
   printf("%d+",i);
   sum+=i;
}
}
printf("=%d",sum);
 
}
int main()
{ 
   int n;
printf("enter value of n");
 scanf("%d",&n);
 add(&n);

    }
   
    