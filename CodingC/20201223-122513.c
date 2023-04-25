#include<stdio.h>

int main()
{
  int i,n,m,z;
printf("enter no size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("which El.insert and wh.psn");
scanf("%d,%d",&z,&m);
n=n+1;
i=n;
while(i>=m)
{
a[i]=a[i-1];
i--;
}
a[m-1]=z;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}


    