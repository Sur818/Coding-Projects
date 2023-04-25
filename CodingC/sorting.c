#include<stdio.h>
 
int main()
{
float x[5]={2.0,5.3,6.4,7.6};
int i,j;
float temp;
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
if(x[j]>x[j+1])
{
temp=x[j+1];
x[j+1]=x[j];
x[j]=temp;
}
}
}
printf("after sorting\n");
for(i=0;i<4;i++)
{
printf("%.2f\n",x[i]);
}
return 0;
}