#include<stdio.h>

int main()
{
  int i,j,k;
 for(i=1;i<=4;i++)
  {
 for(j=1;j<=5;j++)
  {
   if(j==1||j==5)
   {
  printf("1");
 }
  else if(i==1||i==4)
  {
  printf("1");
  }
 else
{
  printf("0");
}
}
  printf("\n");
}
 return 0;
}
