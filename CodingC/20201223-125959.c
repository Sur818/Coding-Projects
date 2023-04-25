
#include <stdio.h>
int main()
{
int a,b,c,D;
printf("enter value of a,b,c:");
scanf("%d,%d,%d",&a,&b,&c);
printf("\n%dx^2+%dx+%d\n",a,b,c);
D=b*b-4*a*c;
if(D>0)
{
printf("real and distinct root");
}
else if(D<0)
{
printf("img root");
}
else
{
printf("real and equal root");
}
return 0;
}

