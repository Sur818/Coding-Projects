#include<stdio.h>

void pattern(int n)
{
 int i,j,k;
for(i=0;i<=n;i++)
{
for(j=0;j<=n-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i+1;k++)
{
printf("*");
}
printf("\n");
}
}
int main()
{
int m,i,n;
printf("how many times");
scanf("%d",&m);
printf("enter size of pattern:-");
scanf("%d",&n);
for(i=0;i<m;i++)
{
pattern(n);
}
return 0;
}









    