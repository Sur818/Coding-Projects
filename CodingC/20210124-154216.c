#include<stdio.h>

int main()
{
int i,j,n1,n,m,rev=0;
printf("size of array");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
m=arr[i];
for(j=1;m!=0;j++)
{
n1=m%10;
rev=rev*10+n1;
m=m/10;
}
printf("%d\n",rev);
rev=0;
}
return 0;
}





 