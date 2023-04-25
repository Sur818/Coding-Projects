#include<stdio.h>

int main()
{ 
 int i;
 int a[5]={1,2,4,5};
  int*ptr=&a;
  for(i=0;i<4;i++)
{
  printf("%d\n",(*ptr+i));
}
return 0;
}