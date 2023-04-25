#include<stdio.h>

int swap(int*a,int*b)
{
  int t;
    t=*a;
    *a=*b;
     *b=t;
  printf("%d,%d",*a,*b);
    }
    int main()
    {
      int a,b;
    printf("enter no");
    scanf("%d,%d",&a,&b);
        swap(&a,&b);
    }
   