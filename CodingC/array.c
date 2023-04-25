#include<stdio.h>
int main()
{
int i,j,m=0;
int a[100]={1,2,2,5,2,9};
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
if(a[i]==a[j])
  {
   m++;
  }
  }

 printf("%dis frequency of no a[%d]\n",m,i);
 m=0;
}
return 0;
}
  