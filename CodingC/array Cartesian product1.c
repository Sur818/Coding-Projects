#include<stdio.h>

int main()
{
  int A[5]={1,2,3,4,5};
   int B[5]={1,2,3,4,5};
   int C[100];
  int i,j,k;
    k=0;
  for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
  {
   C[k]=A[i]*B[j];
    k++;
}
}
for(i=0;i<25;i++)
{
printf("%d ",C[i]);
}
return 0;
}