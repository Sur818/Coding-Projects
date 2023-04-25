#include<stdio.h>
int table(int n,int i)
{
int z;
if(i>10)
{
return 0;
}
else 
{
z=(n*i);
printf("%d*%d=%d\n",n,i,z);
return z;
}
}
int main()
{
int n,x,i=1,sum=0;
 printf("enter the no");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
x=table(n,i);
sum=sum+x;
}
printf("sum of the table is %d", sum);
return 0;
}










    