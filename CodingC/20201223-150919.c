#include<stdio.h>

int add(int a,int b)
{
int c;
c=a+b;
printf("%d",c);
}
int main()
{
int a,b;
printf("enter two no");
scanf("%d,%d",&a,&b);
add(a,b);
return 0;
}