#include<stdio.h>
int main()
{
char string[100];
char*ptr=string;
 int n,i,j;
printf("enter string");
gets(string);
n=strlen(string);
for(i=0;i<n;i++)
{
 if(*(ptr+i)==*(ptr+i+1))
{
for(j=i;j<n;j++)
{
  *(ptr+j)=*(ptr+j+1);
}
n--;
i--;
}
}
puts(string);
}


 

    