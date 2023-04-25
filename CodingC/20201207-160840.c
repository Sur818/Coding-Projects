#include<stdio.h>

int main()
{
 int i, n,c=0;
 printf("Enter the number ");
 scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d\n",feb(n));
}
}
int feb(int n)
{
if(n==0&&n==1)
{
return n;
}
else
{
return feb(n-1)+feb(n-2);
}
}


