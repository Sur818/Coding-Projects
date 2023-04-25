#include<stdio.h>

int great(int a,int b)
{
if(a>b)
{
printf("a greater");
}
else
{
printf("b greater");
}
}
int main()
{
int a,b;
printf("enter two no");
scanf("%d,%d",&a,&b);
great(a,b);
}
