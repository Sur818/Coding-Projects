#include<stdio.h>

int main()
{
int i,j,k,n,m;
printf("enter row");
scanf("%d",&n);
printf("enter collom");
scanf("%d",&m);
int a[n][m],b[n][m],c[n][m];
printf("enter element in first array");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
  printf("a[%d][%d]=",i,j);
  scanf("%d",&a[i][j]);
  }
 }
printf("enter element in second array");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
for(k=0;k<m;k++)
{
c[i][j]=a[i][k]+b[k][j];
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}

