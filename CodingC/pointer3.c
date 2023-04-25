#include<stdio.h>

int add(int*a,int b)
{
*a=*a+b;
return*a;
}
int main()
{
int a=10;
printf("%d",add(&a,20));
}