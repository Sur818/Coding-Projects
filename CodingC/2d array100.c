#include<stdio.h>

int main()
{
int i,j,n,m;
printf("enter row");
scanf("%d",&n);
printf("enter collom");
scanf("%d",&m);
int a[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("\nenterd array\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}