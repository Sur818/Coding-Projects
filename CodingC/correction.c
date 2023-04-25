#include<stdio.h>

int main()
{

    int a,b,c;
    printf("Enter three no=");
    scanf("%d,%d,%d",&a,&b,&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("a greatest");
        }
        else if(a<c)
        {
            printf("c greatest");

        }
    }
    else if(b>c)
    {
        if(b>a)
        {
            printf("b greatest");
        }
        else if(b<a)
        {

                     printf("c greatest");
        }
    }
    else if(c>a)
    {
        if(c>b)
        {
            printf("c greatest");
        }
        else if(c<b)
        {
            printf(" b greatest");
            }
            } 
           
      else if(a==b)
      {
     if(a==c)
    {
       printf("all eqaul");
      }
    }
    else if(b==c)
     {
      if(b>a)
    {
     printf("b=c greatest");
    }
    else
    {
     printf("a greatest");
    }
    }
    else if(c=a)
    {
     if(c>b)
     {
     printf("c=a greatest");
    }
    else
    {
     printf("b greatest");
    }
    }
     
    
     return 0;
    }
    
   




