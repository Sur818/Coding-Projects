#include<stdio.h>

int main()
{ int a;
  printf("Enter your year = ");
  scanf("%d",&a);
  switch(a)
   {
    case1:
      {
       int b;
      printf("enter your branch code");
       scanf("%d",&b);
        switch(b)
          {
           case15:
            {
              printf("IT branch");
              break;
            }
            case16:
              {
             printf("mechanical branch");
             break;
            }
            case17:
            {
             printf("electrical branch");
             break;
            }
            default:
            {
             printf("please  enter valid class code");
             break;
            
             }
            }
            
    case2:
      {
         int c;
        printf("enter class code");
        scanf("%d",&c);
         switch(c)
        {
          case15:
        {
          printf("IT branch");
          break;
        }
         case16:
        {
        printf("Electrical branch");
         break;
        }
        case17:
        {
         printf("mechanical branch");
          break;
        }
        default:
        {
         printf("enter valid branch code");
        break;
        }
        }
      
     case 3:
    {
      int d;
    printf("enter year");
    scanf("%d",&d);
    switch(d)
      {
     case 18:
    {
      printf("It branch");
      break;
    }
    case 19:
     {
     printf("electrical branch");
     break;
    {
     case 20:
    {
     printf("mechanical branch");
     break;
    
    }
    default:
    {
    printf("enter valid year");
     break;
    }
    }
    case4:
    {
      int e;
    printf("enter your branch code");
    scanf("%d",&e);
    switch (e)
    {
     case 21:
    {
     printf("IT branch");
    break;
    }
     case 22:
    {
     printf("EE branch");
    break;
    {
    case23:
    {
    printf("mech branch");
    break;
    }
    default:
    {
     printf("enter valid code");
    break;
    }
    break;
    
    }
    
     return 0;   
           
    
}