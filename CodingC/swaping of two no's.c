#include<stdio.h>

int main()
{
    
   int a,b,temp;
printf("Enter value of a=");
  scanf("%d",&a);
printf("\nEnterthe value of b=");
 scanf("%d",&b);
 temp=a;
  a=b;
  b=temp;
 
  
printf("%d,%d",a,b);
   return 0; 
  
   
    
    
}