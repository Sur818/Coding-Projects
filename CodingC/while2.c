#include<stdio.h>

int main()
{
 int i,j,prod=1,n;
 printf("enter last no");
scanf("%d",&n);
i=1;
while(i<=n)
{
 printf("%d*",i);
  prod=prod*i;
  i++;
   
}
 printf("you product is %d",prod);
return 0;
}