#include<stdio.h>

int main()
{
 int x,n,sum=0, product;
  printf("Enter the no");
  scanf("%d",&n);
  for (x=1;x<=n;x++)
  {
  printf("%d*%d*%d=",x,x,x);
 product=x*x*x;
  printf("%d\n", product);
  sum=sum+(x*x*x);
  
  
}
  printf("=total is %d",sum);
 return 0;
}