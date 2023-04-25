#include<stdio.h>

int charecter(int*p,int n)
{
 int i,count=0;
for(i=0;i<n;i++)
{
if(*(p+i)=' ')
{
 count++;
}
}
printf("%d is charecter in string",count);
}
int main()
{
char name[100];
  char*p=name;
int n;
printf("enter string");
gets(name);
n=strlen(name);
charecter(name,n);
}
