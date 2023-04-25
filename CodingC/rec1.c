#include<stdio.h>
int add(int n)
{
if(n==1)
{
return 1;
}
else 
{
return n+add(n-1);
}
}

int main()
{
int n,x,i;
 printf("enter the no");
scanf("%d",&n);
x=add(n);
for(i=1;i<=n;i++)
{
printf("%d",i);
if(i<n)
{
printf("+");
}
}
printf("=%d",x);
return 0;
}










    