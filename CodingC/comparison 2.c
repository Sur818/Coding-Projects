#include<stdio.h>

int main()
{
    int q,r;
    printf("Enter the no--");
    scanf("%d,%d",&q,&r);
    if(q>=r)
    {
        int a,b, product;
        printf("Enter the no");
        scanf("%d,%d",&a,&b);
        a++;
        b++;
        product=a*b;
        printf("\n%d", product);
    }
    else if(q<r)
    {
        printf("operation failed");
    }




}