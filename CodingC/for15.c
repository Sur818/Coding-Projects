#include<stdio.h>

int main()
{
 float i,j,k;
 float m=0,fact=1,sum=0;
int n;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%.0f!/",i);
k=i;
for(j=1;j<=i;j++)
{
printf("(%.0f)^(%.0f)",k,i);
if(j<i)
{
printf("+");
}
fact=fact*j;
m=m+pow(k,i);
k++;
}
printf("  +  ");

sum=sum+fact/m;
fact=1;
m=0;

}
printf("sum of sereiese is %.2f",sum);
}





