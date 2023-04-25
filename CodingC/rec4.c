#include<stdio.h>

int ap(int n,int a,int d)
{
int z=0;
 if(n<a)
{
return 0;
}
 else
{
printf("%d+",n);
 return n+ap(n-d,a,d);
}
}
int main()
{
 int d,n,a,x;
printf("enter last term of seriese");
scanf("%d",&n);
printf("enter first term");
scanf("%d",&a);
printf("enter common deference");
scanf("%d",&d);
if((a+n-d)%d==0)
{
x=ap(n,a,d);
printf("\n sum of ap series is =%ld",x);
}

else
{
printf("plz enter valid ap series");
}
return 0;
}