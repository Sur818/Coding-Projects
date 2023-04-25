#include<stdio.h>

int main()
{
  int n,r,a,x,sum=0;
   printf("Enter the last term of ap no");
scanf("%d",&n);
printf("\nplease enter common difference");
scanf("%d",&r);
 printf("\nplease enter the first term");
  scanf("%d",&a);
   x=a;
    
  while(x<=n)
{
  
   printf("%d+",x);
  
  sum=sum+x;

   x=x+r;
  
}
 printf("\nsum of your Ap is %d",sum);
  
    return 0;
}