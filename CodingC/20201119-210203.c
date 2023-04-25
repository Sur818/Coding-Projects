#include<stdio.h>
int main()
{
int i,j,m,n;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 m=i*i*i;
printf("%d\t%d\n",i,m);
}
return 0;
}