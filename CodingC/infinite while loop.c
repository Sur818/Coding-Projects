#include<stdio.h>

int main()
{
  int x=1,sum=0;
 do
 {
 printf("enter the no=");
  scanf("%d",&x);
  sum+=x;
  printf("%d\n",sum);
  
   
}while(x!=0);
printf(" total sum =%d",sum);
return 0;
}