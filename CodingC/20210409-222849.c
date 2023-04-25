#include<stdio.h>

int main()
{
int i,j,n;
char str[100];
printf("enter string:-");
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",str[j]);
}
printf("\n");
}
return 0;
}


