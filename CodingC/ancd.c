#include<stdio.h>

int main()
{
int i,j,k,r;
int x[5][5];
 int y[5][5];
int z[100][100];
printf("enter element in first array\n");
 for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("x[%d][%d]=",i,j);
scanf("%d",&x[i][j]);
}
}
printf("enter element in second array\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("y[%d][%d]=",i,j);
scanf("%d",&y[i][j]);
}
} 
 k=0;
 r=0;
for(i=0;i<1;i++)
{
for(j=0;j<4;j++)
{
 z[i][j]=x[k][r];
  r++;
 if(r>=1)
{
k++;
r=0;
}
}
} 
  k=0;
  r=0;
for(i=1;i<2;i++)
{
for(j=0;j<4;j++)
{
  
z[i][j]=y[k][r];
 r++; 
if(r>=1)
{
k++;
r=0;
}
}
 
}
printf("after merging in matrix form\n");
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
printf("%d ",z[i][j]);
}
printf("\n");
}
return 0;
}









