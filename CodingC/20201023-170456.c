#include<stdio.h>

int main()
{
  int array[6];
  int i,j;
 for(i=0;i<5;i++)
   {
   printf("enter element in array");
   scanf("%d",&array[i]);

}
   i=0;
  for(j=0;j<5;j++)
{
   array[j]=2*array[i];
            
    printf("%d\n",array[i]);
    i++;
      
    }
     
    return 0;
    }
    