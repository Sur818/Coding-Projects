#include<stdio.h>
  int main()
 {
   float m,n,x,r,p;
   float sum=0;
   printf("enter the no");
   scanf("%f",&n);
   for(x=1;x<=n-1;x++)
{
   m=(x+1);
  printf("%.0f*%.0f/((%.0f*%.0f)-((%.0f*%.0f)/(%.0f*%.0f)-(%.0f*%.0f)))",x,x,x,x,m,m,x,x,m,m);
  printf("    +    ");
  p=x*x;
  r=p/(p-(((m*m)/(p-(m*m)))));
  sum=sum+r;
 }
 printf("your sum of seriese is %.2f",sum);
return 0;
}
  
  