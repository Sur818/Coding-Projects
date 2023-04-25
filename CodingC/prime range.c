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
printf("%d\n",n);
}
count=0;
}
int main()
{
int n1,n2,i;
printf("enter the no range");
scanf("%d,%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
 prime(i);
}
return 0;
}




