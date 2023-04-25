#include<stdio.h>

int add(int x,int y)
{
return x+y;
}
 int main()
{
  int n,i,sum=0;
for(i=1;i!=0;i)
{
 printf("enter your no");
 scanf("%d",&i);
  add(i,0);
 sum=sum+add(i,0);
}

 printf("yoursum is %d",sum);
}
