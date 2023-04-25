#include<stdio.h>
int main()
{
char str[100];
char*ptr=&str;
int i,n;
printf("enter string;-");
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
//if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
if(*(ptr+i)>='A'&&*(ptr+i)<='z'||*(ptr+i)>='a'&&*(ptr+i)<='z')
{
printf("%c",*(ptr+i));
}

}
}
