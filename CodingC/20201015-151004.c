#include<stdio.h>

int main()
{
  int i,j,z=1;
  for(i=1;i<=5;i++)
   {
 for(j=1;j<=5;j++)
 {
  if(j>=6-i&&j<=4+i)
  {
  if(z<10)
{
  printf("  ");
}
 else if(z>=10)
 {
 printf(" ");
}

  printf("%d",z);
z++;
  
}
else
{
 printf(" ");
 }
}
printf("\n");

  

}
return 0;
}
