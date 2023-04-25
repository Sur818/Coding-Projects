#include<stdio.h>

int main()
{
  int i,n,m,j=1,z,sum=0,k;
printf("enter starting point");
scanf("%d",&n);
printf("enter end point");
scanf("%d",&m);
i=n;
while(i<=m)
{
  
  z=i*j;
 sum=sum+z;
 printf("%d*%d=%d\n",i,j,z);
j++;
i++;
}
printf("%d",sum);
return 0;

}