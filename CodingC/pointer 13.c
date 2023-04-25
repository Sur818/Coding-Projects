#include<stdio.h>

int main()
{
  int a[5]={10,30,10,50,40};
 int*ptr=&a[0];
 int i;
for(i=0;i<5;i++)
{
  printf("%d\n",*(ptr+i));

}
return 0;
}