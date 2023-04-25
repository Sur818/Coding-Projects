#include<stdio.h>

int main()
{
  int i,temp;
   char a[5]={'a','b','c','d','e'};
    char*ptr=&a;
   for(i=0;i<2;i++)
{
   temp=*(ptr+i);
   *(ptr+i)=*(ptr+4-i);
    *(ptr+4-i)=temp;
}
for(i=0;i<5;i++)
{
printf("%c\n",*(ptr+i));
}
return 0;
}

 
