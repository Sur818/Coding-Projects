#include<stdio.h>

int prime(int n)
{
int i,m,count=0;
for(i=2;i<=n/2;i++)
{
m=n%i;
if(m==0)
{
count++;
}
}
if(count==0)
{
printf(" prime no");
}
else
{
printf(" not prime no");
}
}
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
prime(n);
return 0;
}




