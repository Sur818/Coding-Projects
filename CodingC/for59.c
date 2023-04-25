#include<stdio.h>

int main()
{
  int i,n,m,j=1,z,sum=0;
printf("enter starting point");
scanf("%d",&n);
printf("enter end point");
scanf("%d",&m);
for(i=n;i<=m;i++)
{
  z=i*j;
 sum=sum+z;
 printf("%d*%d=%d\n",i,j,z);
j++;
}
printf("%d",sum);
return 0;

}