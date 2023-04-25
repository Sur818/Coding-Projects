#include<stdio.h>

int freq(int*ptr,int n,int m)
{
 int i,count=0;
for(i=0;i<n;i++)
{
if(*(ptr+i)==m)
  {
    count++;
    }
    }
    printf("freq of no%d=%d",m,count);
  }  
  int main()
{
  int i,n,m;
printf("enter size");
scanf("%d",&n);
int a[n];
int*ptr=&a;
for(i=0;i<n;i++)
{
 printf("a[%d]=",i);
scanf("%d",(ptr+i));
}
printf("enter no want to check freq");
scanf("%d",&m);
freq(&a,n,m);
}
