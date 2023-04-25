#include<stdio.h>

int main()
{
int n,n1,count=0,i;
printf("enter the no");
scanf("%d",&n);
for(i=0;n!=0;i++)
{
 n1=n/10;
  n=n1;
  count++;
}
printf(" no of digits is =%d",count);
return 0;
}

 




 
