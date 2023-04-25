#include<stdio.h>

int sum(int n)
{
 if(n==1)
{
return 1;
 }
else
 {
 return n+sum(n-1);
}
}
int main()
{
int n,x;
printf("enter no");
scanf("%d",&n);
 x=sum(n);
 printf("%d",x);
}