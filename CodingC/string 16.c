#include<stdio.h>
int dupl(char* ptr,int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
if(*(ptr+i)==NULL||*(ptr+i)=='@'||*(ptr+i)=='.')
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
printf("after removing of duplicate and spch :");
puts(ptr);
return 0;
}
int main()
{
char str[100];
char* ptr=str;
int n;
printf("enter string:=");
gets(str);
n=strlen(str);
dupl(str,n);
return 0;
}