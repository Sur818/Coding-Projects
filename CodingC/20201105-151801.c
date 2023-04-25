#include<stdio.h>

int main()
{
 int n,m,c;
printf("enter input-1 either'0'or'1':=");
scanf("%d",&n);
printf("enter input-2 either'0' or'1':=");
scanf("%d",&m);
c=n^m;
printf("output of xor logic is %d",c);
return 0;
}