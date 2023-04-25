#include<stdio.h>

int main()
{
 int j,i,sum,n,f=0;
printf("enter any no");
scanf("%d",&n);
i=1;
while(i<=n)
{
f=0;
 if(n%i==0)
{
 j=2;
while(j<=i/2)
{
if(i%j==0)
{
f=1;
}
j++;
}
if(f==0)
{
printf("%d  ",i);
}
}
i++;
}
return 0;
}

