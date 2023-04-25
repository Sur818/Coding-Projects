#include<stdio.h>

int main()
{
  int i,x,n;
char a[5]={'+','-','/','*'};
 printf("enter the indexing");
 scanf("%d",&n);
    switch(a[n])
    {
     case'+':
    {
      int a,b,c;
     printf("enter two no");
    scanf("%d,%d",&a,&b);
     c=a+b;
    printf("your sum is %d",c);
     break;
    }
    case'-':
    {
    int a,b,c;
    printf("enter two no");
    scanf("%d,%d",&a,&b);
      c=a-b;
    printf("your substraction is %d\n",c);
     break;
    }
    case'/':
     {
    int a,b,c;
    printf("enter two no");
    scanf("%d,%d",&a,&b);
     c=a/b;
    printf("your division is %d",c);
    break;
    }
    case'*':
    {
    int a,b,c;
    printf("enter two no");
    scanf("%d,%d",&a,&b);
     c=a*b;
    printf("your multiplication is %d",c);
    break;
    }
    default:
    {
    printf("enter valid indexing");
    break;
    }
    }
    
    return 0;
    }
    
    
    