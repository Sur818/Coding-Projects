#include<stdio.h>
void factorial(int n)
{
if(n>1)
{
printf("%d",n);
printf("*");
factorial(n-1);
}
else if(n==1)
printf("1");
}
int factorial1(int n)
{
if(n>1)
{
return n*factorial1(n-1);
}
else 
return 1;
}
void main()
{
int n,i,sum=0;
printf("Enter n:");
scanf("%d",&n);
printf("1");
for(i=2;i<=n;i++)
{
printf("+");
factorial(i);
}
printf("\n");
printf("Sum is:");
for(i=1;i<=n;i++)
{
sum=sum+factorial1(i);
}
printf("%d",sum);
}
