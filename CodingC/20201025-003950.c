#include<stdio.h>

int main()
{ 
 int array[3][3];
 int i,j;
  for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     array[i][j]=i*10+j;
    
}
 }
for(i=0;i<3;i++)
 {
 for(j=1;j<1;j++)
{
printf("%d\n",array[i][j]);
}
}
return 0;
}