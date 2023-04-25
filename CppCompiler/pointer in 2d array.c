#include<stdio.h>

void show(int *p)
{
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",*((p+i*3)+j));
}
}
}


int main()
{
int i,j;
int a[2][3];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
show (&a[0][0]);
}
