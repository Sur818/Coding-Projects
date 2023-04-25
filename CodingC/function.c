#include<stdio.h>
int rev(int n)
{
int i,m,sum=0,count=0;
int z=n;
for(i=0;z!=0;i++)
{
 count++;
m=z%10;
z=z/10;
}
for(i=0;i<count;i++)
{
m=n%10;
if(m==0)
{
printf("%d",m);
n=n/10;
}
else
{
sum=sum*10+m;
n=n/10;
}
}
printf("%d",sum);
}

int main()
{
int n,i;
printf("enter the no");
scanf("%d",&n);
rev(n);
}
    