#include<iostream>
using namespace std;
char touppercase(char s)
{
if(s>='a'&&s<='z')
{
return char(s-32);
}
else
return s;
}


int main()
{
   char s[100];
char s1[10];
int i,j=0;
cout<<"enter string:-";
gets(s);
for(i=0;i<strlen(s);i++)
{
if(s[i-1]==' '||i==0)
{
s1[j++]=touppercase(s[i]);
s1[j++]='.';
}
}
for(i=0;i<j;i++)
{
cout<<s1[i];
}
}


