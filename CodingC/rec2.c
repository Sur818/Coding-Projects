#include<stdio.h>
int add(int n)
{
if(n%2==1)
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
else
{
n--;
add(n);
}
}
int main()
{
int n,x,i;
 printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
x=add(n);
if(i%2==1)
{
printf("%d",i);

if(i<n-1)
{
printf("+");
}
}
}
printf("=%d",x);
return 0;
}










    