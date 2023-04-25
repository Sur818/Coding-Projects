#include<stdio.h>

int main()
{
int a=20,c;
  int b=40;
  int*ptr1=&a;
int*ptr2=&b;
    c=*ptr1+*ptr2;
    printf("%d",c);
    return 0;
    }