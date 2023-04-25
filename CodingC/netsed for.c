#include<stdio.h>

int main()
{
 int i,j,n,m;
  printf("enter rows");
  scanf("%d",&n);
  printf("enter collom");
   scanf("%d",&m);
  for(i=1;i<=n;i++)
   {
   for(j=1;j<=m;j++)
{
  if(i==1||i==n)
{
  printf("*");
}
else if(i>1&&i<n)
{
 if(j==1||j==m)
  {
 printf("*");
}
else
{
printf(" ");
}
}
}
printf("\n");
}
return 0;
}