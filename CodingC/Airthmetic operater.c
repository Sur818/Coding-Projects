#include<stdio.h>

int main()
{ 
   int a,b,c;
float d;
  printf("Enter any two no");
   scanf("%d %d",&a,&b);
   c=a+b;
   d=c*(a+b)/(a-b);
  printf("\n %d,%.2f",c,d);
  return 0;
}
   
    