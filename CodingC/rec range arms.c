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
int n,x,m,i;
printf("enter the range");
scanf("%d",&n);
printf("\narmst no are:\n");
for(i=1;i<=n;i++)
{
m=i;
x=rec(i);
if(x==m)
{
printf("%d\n",x);
}
}
return 0;
}