#include<stdio.h>

int main()
{
 float i,m,n;
 float sum=0,x;
  printf("enter the last no of seriese ");
 scanf("%f",&n);
for(i=1;i<=n;i++)
{
  m=i-1;
  printf("%.0f/",i);
   printf("(%.0f+%.0f*%.0f)",i,m,m);
  if(i<n)
   {
printf("  +  ");
}
    x=(i+m*m);
   sum=sum+(i/x);
}
printf("your sum is=%.2f",sum);
 return 0;
}
