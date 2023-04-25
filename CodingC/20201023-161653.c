#include<stdio.h>

int oddoreven(int a)
{
    if(a%2==0)
    {
        printf("%dis even\n",a);
    }
    else
    {
        printf("%d is odd\n",a);
    }
}
int main()
{
    int xyz[]= {1,4,6,7,9,33};
    int i;
    for(i=0; i<6; i++)
    {
        oddoreven(xyz[i]);
    }
}


