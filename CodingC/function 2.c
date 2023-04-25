#include<stdio.h>

int leap(int n)
  {
   if(n%4==0)
   {
     printf("leap year");
    }
    else
    {
    printf("not leap year");
    }
    }
  int main()
{
int n;
printf("enter year");
scanf("%d",&n);
    leap(n);
    }
    
  
    