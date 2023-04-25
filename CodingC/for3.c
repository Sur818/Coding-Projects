#include<stdio.h>

int main()
{ 
  int n,x,sum=0, table;
 printf("Enter your no");
scanf("%d",&n);
  for(x=1;x<=10;x++)
   {
   
  printf("%d*%d= %d\n",n,x,n*x);
   table=n*x;
  sum=sum+table;
   
   }
  printf("sum of table is %d",sum);
 
  return 0;
 }


  
