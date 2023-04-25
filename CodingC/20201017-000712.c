#include<stdio.h>

int main()
{
  int a,b;
 char ch;
 
  
  printf("enter the Operation\n");
   scanf("%c",&ch);
 printf("enter the no =");
  scanf("%d,%d",&a,&b);
  
  switch( ch )
  
 {
   case'+':
    {
      int sum;
       sum=a+b;
      printf("your sum is %d",sum);
      break;
    }
     case'*':
    {
      int product;
         product=a*b;
        printf("your product is%d", product);
         break;
        }
       case'-':
     {
         int sub;
         sub=a-b;
         printf("your substraction is %d",sub);
         break;
        }
        case'%':
        {
          float div;
          div=a%b;
         printf("your division is%f",div);
         break;
        }
        
        default:
         {
         printf("enter valid operation");
         
        }
        }
        
        return 0;
        }
  