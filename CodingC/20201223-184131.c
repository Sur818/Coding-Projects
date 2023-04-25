#include<stdio.h>
int rec(int n)
{
int n1,rev=0;
if(n==0)
{
return 0;
}
else
{
n1=n%10;
rev=n1*n1*n1;
return rev+rec(n/10);

}
}
int main()
{
int n,x,m;
printf("enter the no");
scanf("%d",&n);
m=n;
x=rec(n);
printf("%d\n",x);
if(x==m)
{
printf("Armstrong no");
}
else
{
printf("not Armstrong no");
}
}