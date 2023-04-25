#include<stdio.h>

int main()
{
  int i,n,m,j=1,z,sum=0,k;
printf("enter starting point");
scanf("%d",&n);
printf("enter end point");
scanf("%d",&m);
k=1;
for(i=n;i<=m;i++)
{
for(j=k;j>=k;++k)
{
  z=i*j;
 sum=sum+z;
 printf("%d*%d=%d\n",i,j,z);
}
}
printf("%d",sum);
return 0;

}