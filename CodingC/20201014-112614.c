#include<stdio.h>

int main()
{
  int x=1,n,m,count=1,sum=0;
  printf("enter your no");
  scanf("%d",&n);
   while(x<=100)
   {
   m=n*x;
   printf("%d*%d=%d\n",n,x,m);
sum=sum+m;
    x++;
   
    if(count==5)
     {
     break;
    
      }
     count++;
    }
    printf("your sum is %d",sum);
    return 0;
    }
  
   
  
   