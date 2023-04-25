#include<stdio.h>

int main()
{
  int a[100]={1,6,8,4,5,3,0,9};
   int i;
   int*ptr=&a;
for(i=0;i<7;i++)
{
  if((*ptr+i)%2==0)
{
  printf("%dis even no\n",(*ptr+i));
}
else
{
 printf("%d is odd no\n",(*ptr+i));
}
}
return 0;
}
