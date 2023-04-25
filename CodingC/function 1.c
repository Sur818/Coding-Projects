#include<stdio.h>

int rev(int n)
{
int m,sum=0,n1;
m=n;
while(m!=0)
{
 n1=m%10;
  m=m/10;
  sum=sum*10+n1;
}
printf("%d",sum);
}

int main()
{
int n;
 printf("enter no");
 scanf("%d",&n);
  rev(n);
  }

 

    