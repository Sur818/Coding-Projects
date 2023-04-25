#include<stdio.h>

int main()
{
int i,k,j,n,m,r;
printf("enter size of immergiing array");
scanf("%d %d",&n,&m);
 int a[n][m];
int b[n][m];

int c[n+n][m];
printf("\nenter element in first array\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\nenter element in second array\n");
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
c[i][j]=a[i][j];
}
}
k=3;
r=0;
for(i=0;i<n;i++)
{
 r=0;
for(j=0;j<m;j++)
{
c[k][r]=b[i][j];
 r++;
}
k++;
}
printf("\n after merging\n");
for(i=0;i<2*n;i++)
{
for(j=0;j<m;j++)
{
printf("c[%d][%d]=",i,j);
printf("%d  ",c[i][j]);
}
printf("\n");
}
return 0;
}