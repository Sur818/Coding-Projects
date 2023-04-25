#include<stdio.h>

int main()
{
 int x,n,product=1;
  printf("enter your no");
  scanf("%d",&n);
  for(x=1;x<=n;x++)
{
  printf("%d*",x);
   product=(product*x);
}
 printf("\nyour product is %d", product);
return 0;
} 