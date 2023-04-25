#include<stdio.h>

int main()
{
    int x,sum=0,count=0;
    printf("enter your no");
    scanf("%d",&x);
    while(x<=100)
    {



        printf("%d\n",x);

        sum=sum+x;
        x++;
        count++;

        if(count==5)
        {
            break;
        }

    }
    printf("your sum is %d",sum);
    return 0;
}
