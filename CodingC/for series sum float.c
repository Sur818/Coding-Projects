#include<stdio.h>

int main()
{
     float x,n,m;
   float sum=0.0;
   printf("Enter your no=");
   scanf("%f",&n);
   for(x=1;x<=n-1;x++)
  {
    m=x+1;
   printf("(%.0f)/(%.0f+%.0f) ",x,x,m);
  if(x<n-1)
{
   printf("+");
}
   sum=sum+(x/(x+(x+1)));
   }
  printf("\nyour sum is %.2f",sum);

   return 0;

  
}