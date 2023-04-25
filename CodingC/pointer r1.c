#include<stdio.h>

int change (int*ptr)
{
int i;
for(i=0;i<5;i++)
{
  *ptr=*ptr+1;
   ptr++;
}
}
int main()
{
int i;
int a[5]={10,20,30,40,50};
 change(&a[0]);
for(i=0;i<5;i++)
{
printf("\n%d",a[i]);
}
}
