#include<stdio.h>

int main()
{
 char name[100];
int i,n;
printf("enter name:=");
gets(name);
n=strlen(name);
for(i=0;i<=n;i++)
{
printf("%c\n",name[i]);
}
return 0;
}