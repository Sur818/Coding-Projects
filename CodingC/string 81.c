#include<stdio.h>
#include<string.h>

int main()
{
int i,m;
char str[100];
printf("enter string");
gets(str);
m=strlen(str);
for(i=0;i<m/2;i++)
{
 if(str[i]==str[m-1-i])
{
printf("pelindrome");
break;
}
else
{
printf("not pelindrome");
break;
}
}
return 0;
}





 