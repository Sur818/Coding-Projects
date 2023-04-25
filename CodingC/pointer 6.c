#include<stdio.h>

int add(int*a,int*b)
{
   int *c;
  *c=*a+*b;
printf("%d\n",*c);
}
int main()
{
   int a=10,b=10;
    add(&a,&b);
     a=5;
     add(&a,&b);
    }
   
    