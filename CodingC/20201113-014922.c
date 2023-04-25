#include<stdio.h>
int main()
{
int i,j,k,r;
int a[2][3];
int b[3][2];
int c[3][4];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}

for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}

k=0;
r=0;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{

c[k][r]=a[i][j];
 r++;
if(i==0&&j==4)
{
 k++;
r=0;
}
}
}

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
c[k][r]=b[i][j];
 r++;
if(r==1&&j==4)
{
 k++;
r=0;
}
}
}

for(k=0;k<3;k++)
{
for(r=0;r<4;r++)
{
printf("%d\t",c[k][r]);
}
printf("\n");
}
return 0;
}
