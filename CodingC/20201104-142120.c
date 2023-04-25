#include<stdio.h>

int main()
{
  int i,sum=0;
   int a[6]={1,2,3,4,5,6};
   int*ptr=&a;
for(i=0;i<6;i++)
{
 printf("%d",*ptr);
 printf("+");
  sum=sum+*ptr;
  ptr++;
}
printf("=%d",sum);
return 0;
}