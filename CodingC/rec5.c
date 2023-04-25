#include<stdio.h>

int gp(int n,int a,int r)
{
int z=0;
 if(n<a)
{
return 0;
}
 else
{
printf("%d+",a);
 return a+gp(n,a*r,r);
}
}
int main()
{
 int r,n,a,x;
printf("enter last term of seriese");
scanf("%d",&n);
printf("enter first term");
scanf("%d",&a);
printf("enter common ratio");
scanf("%d",&r);
x=gp(n,a,r);
printf("\n sum of ap series  is =%ld",x);
return 0;
}