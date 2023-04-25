#include<stdio.h>

int main()
{
  float n,d,a,z,v,m,p,x;
   float sum=0;
   printf("Enter the last term of ap no=");
scanf("%f",&n);
printf("\nplease enter common difference=");
scanf("%f",&d);
 printf("\nplease enter the first term=");
  scanf("%f",&a);
   x=a;
  p=1+(n-a)/d;
 printf("\n no of term in APIs==%d\n",p);
  while(x<=n)
{
  
   printf("%.0f+",x);
  
  m=a/2;
  v=(2*a+(p-1)*d);
sum=sum+m*v;

   x=x+d;
  
}
 printf("\nsum of your Ap is %f",sum);
  
    return 0;
}