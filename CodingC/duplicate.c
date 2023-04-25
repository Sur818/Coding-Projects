#include<stdio.h>

int main()
{
int i,j,t=0,n,m,k;
printf("enter size");
scanf("%d",&n);
int a[n];
int b[100];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
b[t]=a[i];
t++;
}
}
}
printf("duplicate element are\n ");
for(i=0;i<t;i++)
{
for(j=i+1;j<t;j++)
{
if(a[i]==a[j])
{
for(k=j;k<t;k++)
{
a[k]=a[k+1];
}
t--;
i--;
}
}
}
for(i=0;i<t;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
    