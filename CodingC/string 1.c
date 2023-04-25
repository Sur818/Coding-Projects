#include<stdio.h>

int main()
{
 char name[20];
printf("enter name:");
fgets(name,sizeof(name),stdin);
puts(name);
return 0;
}