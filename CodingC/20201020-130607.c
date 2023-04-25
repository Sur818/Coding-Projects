#include<stdio.h>

int per()
{
  int a,b,c,per,sum=0;
   printf("enter your math Mark's=");
    scanf("%d",&a);
    printf("enter your physhics marks=");
    scanf("%d",&b);
   printf("enter yor electronic Mark's=");
  scanf("%d",&c);
  sum=a+b+c;
   per=sum*100/300;

 return (per);
}
int main()
 {
   int x=per();
   printf("your percentage is %d",x);
}
