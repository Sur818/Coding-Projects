#include<stdio.h>

int main()
{
int i,j,n,m;
 int a[500]={1,2,4,5,6,8};
 printf("which no want to insert");
 scanf("%d",&n);
  printf("which position");
  scanf("%d",&m);
  for(i=6;i>=m;i--)
{
a[i]=a[i-1];
}
a[m-1]=n;
for(i=0;i<7;i++)
{
printf("%d\n",a[i]);
}
return 0;
}