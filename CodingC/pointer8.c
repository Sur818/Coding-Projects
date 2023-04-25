#include<stdio.h>

int main()
{
 int a,b,c,d,e,sum;
  printf("enter value of a,b,c,d,e=");
 scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
 int p=90,q=50,r=60,s=189,t=441;
 int*ptr1=&p;
int*ptr2=&q;
int*ptr3=&r;
int*ptr4=&s;
int*ptr5=&t;
  sum=*ptr1+a+*ptr2+b+*ptr3+c+*ptr4+d+*ptr5+e;
printf("%d",sum);
return 0;
}
 