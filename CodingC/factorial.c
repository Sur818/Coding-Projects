#include<stdio.h>
int main()
{
int i,n;
float m=0,sum=0,fact=1,k=1,j;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d!/",i);
for(j=1;j<=i;j++)
{
printf("%.0f",k);
if(j<i)
{
printf("+");
}
fact=fact*j;
sum=sum+k;
k++;
}
m=m+fact/sum;
fact=1;
sum=0;
printf(" + ");
}
printf("\nsum of the serie is=%.2f",m);

return 0;
}


