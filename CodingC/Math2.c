#include<stdio.h>

int main()
{
 int i,j,n,m,f,k=0;
printf("enter size of first array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter size of second array");
scanf("%d",&m);
int b[m];
int c[m+n];
for(i=0;i<m;i++)
{
printf("a[%d]=",i);
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
j=0;
f=0;
while(j<n)
{
 if(a[i]==b[j])
{
  f=1;
}
j++;
}
if(f==0)
{
c[k++]=a[i];
}
}
for(i=0;i<n;i++)
{
j=0;
f=0;
while(j<n)
{
if(b[i]==a[j])
{
f=1;
}
j++;
}
if(f==0)
{
c[k++]=b[i];
}
}
printf("symmetric deffrenc:-\n");
for(i=0;i<k;i++)
{
printf("%d\n",c[i]);
}
}
