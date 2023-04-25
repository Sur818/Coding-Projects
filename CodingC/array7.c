#include<stdio.h>

int main()
{ 
int i,j,n,max[0],min[0],second;
printf("enter size of array");
scanf("%d",&n);
 int array[n];
 for(i=0;i<n;i++)
  {
  printf("array[%d]=",i);
   scanf("%d",&array[i]);
}
  max[0]=array[0];
for(i=0;i<n;i++)
{
   if(array[i]>max[0])
      {
        second=max[0];
       max[0]=array[i];
         
        }
        }
        printf("%lld second max element",second);
        return 0;
        }
        