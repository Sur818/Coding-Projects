#include<stdio.h>
int dupl(char*ptr,int n)
{
int i,j,t,k,m;
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
puts("after rem. of dup. and spch.");
puts(ptr);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(ptr+j)==*(ptr+i))
{
for(k=j;k<n;k++)
{
  *(ptr+k)=*(ptr+k+1);
}
}
}
}
m=strlen(ptr);
puts("after removal same type element");
puts(ptr);
printf("%d type of later are present ",m);

return 0;
}
int main()
{
char str[100];
char*ptr=str;
int n;
printf("enterstring:=");
gets(ptr);
n=strlen(ptr);
dupl(str,n);
return 0;
}