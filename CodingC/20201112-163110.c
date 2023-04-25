#include<stdio.h>

int main()
{
 int a[3][3];
int b[3][3];
int c[6][3];
  int i,j,k,r;
printf("\nenter element in first array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\nenter element in second array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("b[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j];
}
}
k=3;
r=0;
for(i=0;i<3;i++)
{
 r=0;
for(j=0;j<3;j++)
{
c[k][r]=b[i][j];
 r++;
}
k++;
}
printf("\n after merging\n");
for(i=0;i<6;i++) 
{
for(j=0;j<3;j++)
{
printf("c[%d][%d]=",i,j);
printf("%d  ",c[i][j]);
}
printf("\n");
}
return 0;
}