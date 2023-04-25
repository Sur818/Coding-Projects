#include<stdio.h>

int main()
{



    int p,c,m,Bee,Ep,total;
    float per;
    printf("enter your physhics mark=");
    scanf("\n%d",&p);
    printf("Enter your chemistry marks=");
    scanf("\n%d",&c);
    printf("Enter your math mark=");
    scanf("\n%d",&m);
    printf("Enter your Besi electrical engineering mark=");
    scanf("\n%d",&Bee);
    printf("Enter your Ep marks=");
    scanf("\n%d",&Ep);
    total=p+c+m+Bee+Ep;
    per=(total*100/500);
    printf("your percentage is=%.2f\n",per);
    if(per>75)
    {
        printf("A grade");
    }
    else if(per>60)
    {
        if(per<75)
        {
            printf("B grade");
        }
    }
    else if(per>40)
    {
        if(per<60)
        {
            printf("C grade");
        }
    }
    else if(per<40)
    {
        printf("fail");
    }

    return 0;

}








