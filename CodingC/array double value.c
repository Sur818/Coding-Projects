#include<stdio.h>

int main()
{
  int array[6]={1,2,4,7,9};
  int i=0,j;
  for(j=0;j<5;j++)
{
   array[j]=2*array[i];
            
    printf("%d\n",array[i]);
       i++;
    } 
    return 0;
    }