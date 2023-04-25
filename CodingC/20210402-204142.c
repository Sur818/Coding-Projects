#include<stdio.h>

int main()
{
 int i,j,n,k=0,b=0;
printf("enter size ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
for(j=0;j<10;j++)
{
if(k%2!=0&&k<=n)
{
printf("*%d",k);
}
k++;
}
printf("\n");
}
else
{
for(j=0;j<10;j++)
{
if(b%2==0&&b<=n)
{
printf("%d*",b);
}
b++;
}
printf("\n");
}
}
}


    
    