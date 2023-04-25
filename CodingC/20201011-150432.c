#include<stdio.h>

int main()
{
    int x,n,table=0;
   int m,sum=0;
    printf("Enter the no");
    scanf("%d",&n);
    for (x=1; x<=(n-1); x++)
    
    {
         table=n*x;
      
        printf("%d*%d=%d\n",n,x,table);
        
        x++;
        
        sum=sum+table;
        


    }
    printf("\nyour total  odd no table sum sum %d",sum);
    return 0;
}