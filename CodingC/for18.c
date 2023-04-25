#include<stdio.h>

int main()
{
 int i,n,j,r=0,m,sum,n1;
printf("enter range no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
m=i;
r=0;
for(j=1;m!=0;j++)
{
  n1=m%10;
   m=m/10;
   r=r+n1*n1*n1;
}
if(r==i)
{
printf("%d\n",i);
}
}
return 0;
}

