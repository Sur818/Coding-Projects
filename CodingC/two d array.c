#include<stdio.h>

int main()
{
  int a[100][100];
int i,j,k,sum=0,per;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
sum=sum+a[i][j];
per=sum/3;
}
for(k=i;k<=i;k++)
{
for(j=3;j<=3;j++)
{
a[i][j]=sum;
a[i][j+1]=per;
}
}
sum=0;
printf("\n");
}
printf("your enterd mark sum and prc is\n");
for(i=0;i<6;i++)
{
if(i<3)
{
printf("sub[%d]\t",i+1);
}
  if(i==3)
{
printf("sum\t");
}
else if(i==5)
{
printf("per");
}
}

for(i=0;i<3;i++)
{
for(j=0;j<5;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}