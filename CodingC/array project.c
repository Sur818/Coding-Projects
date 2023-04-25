#include<stdio.h>

int main()
{
int i,j,n,m,p,sum=0;
  printf("enter row");
   scanf("%d",&n);
  printf("enter collom");
   scanf("%d",&m);
 int x[n][m];
for(i=0;i<n;i++)
{
 for(j=0;j<m-1;j++)
{
printf("x[%d][%d]=",i,j);
 scanf("%d",&x[i][j]);
  sum=sum+x[i][j];
x[i][j+1]=sum;
 }
sum=0;
}
printf("rollno\tsub1\tsubt2\tsum\n");
for(i=0;i<n;i++)
{
  p=i+1;
printf("%d\t",p);
 for(j=0;j<m;j++)
{

  printf("%d \t",x[i][j]);
}
printf("\n");
}
return 0;
}

