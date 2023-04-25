#include<stdio.h>

int main()
{

    float r,x,sum=0;
    float n;

    printf("enter then last  no of gp");
    scanf("%f",&n);
    printf("\nEnter cr");
    scanf("%f",&r);
    for(x=1; x<=n; x=x*r)

    {
        if(r==1)
        {
       printf("please enter valid cr");
          break;
          }
      printf("%.0f",x);
        
        if(x<=n/r)
        {
            printf("+");
            }
           sum=sum+x;
    }
    printf("\nyour sum=%f",sum);
    return 0;
}


    