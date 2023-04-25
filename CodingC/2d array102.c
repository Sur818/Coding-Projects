#include<stdio.h>

int main()
{
int i,j,n,m,sum=0,per=0,k;
printf("enter row");
scanf("%d",&n);
printf("enter collom");
scanf("%d",&m);
int a[n][m+2];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
sum=sum+a[i][j];
a[i][j+1]=sum;
}
for(j=m+1;j<=m+1;j++)
{
per=sum/m;
a[i][j]=per;
}
printf("\n");
per=0;
sum=0;
}
printf("\nenterd array\n");
for(i=0;i<n;i++)
{
printf("stu[%d]:",i+1);
for(j=0;j<m+2;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=m+1;j<m+2;j++)
{
 if(a[i][j]>80)
{
printf("stu[%d]=\n",i+1);
printf("you total mark=%d\n",a[i][m]);
printf("your per=%d%\n",a[i][j]);
printf("grade A\n");
}
else if(a[i][j]>60)
{
printf("stu[%d]=\n",i+1);
printf("you total mark=%d\n",a[i][m]);
printf("your per=%d%\n",a[i][j]);
printf("grade B\n");
}
else if(a[i][j]>50)
{
printf("stu[%d]=\n",i+1);
printf("you total mark=%d\n",a[i][m]);
printf("your per=%d%\n",a[i][j]);
printf("grade C\n");
}
else 
{
printf("stu[%d]=\n",i);
printf("you total mark=%d\n",a[i][m]);
printf("your per=%d%\n",a[i][j]);
printf("fail\n");
}
}
}
return 0;
}