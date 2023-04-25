#include<stdio.h>

int main()
{
int n,x;
printf("enter no");
scanf("%d",&n);
x=fact(n);
printf("%d",x);
}
int fact(int n)
{
if(n==1)
{
return 1;
}
else
{
return n*fact(n-1);
}
}


