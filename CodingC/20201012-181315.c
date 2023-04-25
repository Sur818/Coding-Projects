#include<stdio.h>

int main()
{
 long long int x,n,product=1;
  printf("enter your no");
  scanf("%lld",&n);
  for(x=1;x<=n;x++)
{
  printf("%d*",x);
   product=(product*x);
}
 printf("\nyour product is %lld", product);
return 0;
} 