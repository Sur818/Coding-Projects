#include<stdio.h>
int dupl(char*ptr,int n)
{
int i,j,t,k;
for(t=0;t<n;t++)
{
for(i=0;i<n;i++)
{
if(*(ptr+i)==' '||*(ptr+i)=='@'||*(ptr+i)=='.')
{
for(j=i;j<n;j++)
{
*(ptr+j)=*(ptr+j+1);
}
n--;
i--;
}
else if(*(ptr+i)==*(ptr+i+1))
{
for(k=i;k<n;k++)
{
*(ptr+k)=*(ptr+k+1);
}
n--;
i--;
}
}
}
printf("after rem. of dup. and spch.");
puts(ptr);
return 0;
}
int main()
{
char str[100];
char* ptr=&str;
int n;
printf("enterstring:=");
gets(str);
n=strlen(str);
dupl(&str,n);
return 0;
}