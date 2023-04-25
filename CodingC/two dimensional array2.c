#include<stdio.h>
int main()
{
int i,j,k,r,n,m;
printf("enter size of array");
scanf("%d,%d",&n,&m);
int a[n][m];
int b[m][n];
int c[m][n+n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}

k=0;
r=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{

c[k][r]=a[i][j];
 r++;
if(i==j&&j==2*n)
{
 k++;
r=0;
}
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[k][r]=b[i][j];
 r++;
if(i==j&&j==2*n)
{
 k++;
r=0;
}
}
}

for(k=0;k<m;k++)
{
for(r=0;r<2*n;r++)
{
printf("%d\t",c[k][r]);
}
printf("\n");
}
return 0;
}
