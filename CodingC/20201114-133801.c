#include<stdio.h>

int first(char*ptr)
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
 char a[6]={'h','e','l','l','o'};
 char*ptr=&a;
  first(&a);
int i;
for(i=0;i<5;i++)
{
printf("%c\n",*(ptr+i));
}
}