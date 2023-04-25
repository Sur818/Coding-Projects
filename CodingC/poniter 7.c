#include<stdio.h>

int xyz(int*a,int*b)
{
  int c;
   c=*a+*b;
 printf("%d\n",c);
  return c;
}
int main()
{
  int a,b,sum=0;
  do
{
  printf("enter value of a&b=");
  scanf("%d,%d",&a,&b);
    sum=sum+xyz(&a,&b);
   }while(a!=0&b!=0);
   printf("total sum is =%d",sum);
}
 