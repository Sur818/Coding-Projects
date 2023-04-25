#include<stdio.h>

int main()
{
int i,j,k,m,t,n;
printf("enter rows");
scanf("%d",&n);
if(n%2==0)
{
for(i=1;i<=n/2;i++)
{
for(j=n/2;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
 printf("%d",k);
}
for(t=i-1;t>=1;t--)
{
printf("%d",t);
}
printf("\n");
}

for(i=n/2;i>=1;i--)
{
for(j=n/2;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",k);
}
for(t=i-1;t>=1;t--)
{
printf("%d",t);
}
printf("\n");
}
}
if(n%2==1)
{
for(i=1;i<=n/2+1;i++)
{
for(j=n/2+1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
 printf("%d",k);
}
for(t=i-1;t>=1;t--)
{
printf("%d",t);
}
printf("\n");
}
for(i=n/2;i>=1;i--)
{
for(j=n/2+1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",k);
}
for(t=i-1;t>=1;t--)
{
printf("%d",t);
}
printf("\n");
}
}

return 0;
}