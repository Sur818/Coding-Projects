#include<stdio.h>

int main()
{
int i,j,k,n,m;
printf("enter size");
scanf("%d",&n);
int a[n];
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
for(k=j;k<n;k++)
{
 a[k]=a[k+1];
}
n--;
i--;
}
}
}
printf("\nafter removing duplicacy\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
