#include<stdio.h>

int main()
{
  int i, j;
  int x[5];
  int y[5],z[5];
for(i=0;i<5;i++)
{
  printf("enter elements in first array");
  scanf("%d",&x[i]);
}
 printf("\n");
for(i=0;i<5;i++)
{
 printf("enter elements in second array");
 scanf("%d",&y[i]);
}
for(i=0;i<5;i++)
{
 z[i]=x[i]+y[i];
 printf("%d\n",z[i]);
}
return 0;
}


  
