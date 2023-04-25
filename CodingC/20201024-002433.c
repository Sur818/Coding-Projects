#include<stdio.h>

int main()
{
 int array[5]={1,2,5,7,9};
int i,j;
 int max[5],min[5];
  max[5]=min[5]=array[0];
 for(i=0;i<5;i++)
{
  if(array[i]>max[5])
   {
    max[5]=array[i];
    }
    }
    
 for(i=0;i<5;i++)
{
    if(array[i]<min[5])
    {
     min[5]=array[i];
    }
    }
    printf(" maximum is %d",max[5]);
    printf("\n minimum is %d",min[5]);
    return 0;
    }