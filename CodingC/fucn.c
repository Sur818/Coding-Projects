#include<stdio.h>

int add(int x,int y)
{
    int c;
     c=x+y;
    return (c);
   
}
int main()
{
  int a,b;
printf("enter the no");
  scanf("%d,%d",&a,&b);
 add(a,b);
 printf("%d",add(a,b));
}