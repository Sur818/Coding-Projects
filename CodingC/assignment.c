#include<stdio.h>

int main()
{
int n,p;
printf("enter the date");
scanf("%d",&p);
n=p%7;
if(n==1||n==2||n==3||n==4||n==5||n==6||n==7);
{
 if(n==1)
{
printf("Tuesday");
}
else if(n==2)
{
printf("Wednesday");
}
else if(n==3)
{
printf("Thursday");
}
if(n==4)
{
printf("Friday");
}
if(n==5)
{
printf("Saturday");
}
else if(n==6)
{
printf("Sunday");
}
else if(n==7)
{
printf("Monday");
}
}
return 0;
}
