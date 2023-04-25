#include<stdio.h>

int main()
{
 int a;
  printf("enter the no");
  scanf("%d",&a);
   switch(a)

 {
   case 1:
    {
      printf("good morning");
       break;
    }
    case 2:
      
   {
 printf("good after noon");
    break;
   
}
 case3:
{ 
printf("good evening");
  break;
}
case4:
{
printf("good night");
 break;
}

default:
{
printf("enter valid no");
  break;
}
}
return 0;
}