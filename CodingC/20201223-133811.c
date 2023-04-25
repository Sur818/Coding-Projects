
#include <stdio.h>
int main()
{
int a,b,c;
printf("enter value of a,b,c:");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a greatest");
}
else if(a<c)
{
printf("c greatest");
}
else
{
printf("a=c greatest");
}
}
else if(b>a)
{
if(b>c)
{
printf("b greatest");
}
else if(b<c)
{
printf("c greatest");
}
else
{
printf("b=c greatest");
}
}
else if(c>a)
{
if(c>b)
{
printf("c greatest");
}
else if(c<b)
{
printf("b greatest");
}
else
{
printf("b=c greatest");
}
}
else if(a==b)
{
if(a==c)
{
printf("all equal");
}
}
return 0;
}

