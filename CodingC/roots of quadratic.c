#include<stdio.h>

int main()
{
   float a,b,c,X1,X2;
  printf("Enter value of a and b and c:)");
  scanf("%f,%f,%f",&a,&b,&c);
    X1=(-b+sqrt(b*b-4*a*c))/2*a;
    X2=(+b+sqrt(b*b-4*a*c))/2*a;
    printf("value of X1=%f\n,and value of X2=%f",X1,X2);
    return 0;
    }