#include<stdio.h>

  add(int*a,int*b)
  {
   int c;
  c=*a+*b;
   printf("%d",c);
}
main()
{
  int a=10,b=10,c;
   add(&a,&b);
   
}