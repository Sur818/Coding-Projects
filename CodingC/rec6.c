#include<stdio.h>

int rev(int n)
{
 int sum=0,n1;
if(n==0)
{
return 0;
}
else
{
n1=n%10;
sum=sum*10+n1;
printf("%d",sum);
return rev(n/10);
}
}
int main()
{
int n;
 printf("enter no");
 scanf("%d",&n);
rev(n);
return 0;
  }

 

    