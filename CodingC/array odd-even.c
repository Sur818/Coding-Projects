#include<stdio.h>

int main()
{
  
   int myarray[10]={1,8,7,5,9};
   int i,a;
   for(i=0;i<5;i++)
{
    a=myarray[i];
   if(a%2==0)
   {
     printf("%d is even\n",a);
    }
     else
    {
     printf("%d is odd\n",a);
    }
     
}
return 0;
}