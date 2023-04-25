#include<stdio.h>

int main()
{
int i,j,sum=0,n;
printf("enter size of array:");
scanf("%d",&n);
int x[n];
int y[n];
int z[n];
for(i=0;i<n;i++)
{
printf("x[%d]=",i);
scanf("%d",&x[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
printf("y[%d]=",i);
scanf("%d",&y[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
sum=sum+x[i]*y[j];
z[i]=sum;
}
sum=0;
}
printf("after multiplication\n");
for(i=0;i<n;i++)
{
printf("%d\n",z[i]);
}
return 0;
}

 