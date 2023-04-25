#include<stdio.h>

int main()
{
    int x,sum=0,n;
     printf("Enter your no=  ");
     scanf("%d",&n);
     for(x=1;x<=n;x++)
     {
        printf("%d",x);
        if(x<n)
        {
         printf("+");
        }
        sum=sum+x;
        }
         printf("=\nyour sum is %d",sum);
        return 0;
        }
        
       
    
