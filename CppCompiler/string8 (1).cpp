#include<iostream>
using namespace std;
int lastindexof(char [],char);
char touppercase( char);
int main()
{
  char s[100];
int i,n,flag=0,pos;
cout<<"enter string:-";
gets(s+1);
s[0]=' ';
n=strlen(s);
pos=lastindexof(s,' ');
for(i=0;i<pos;i++)
{
if(s[i]==' ')
{
cout<<touppercase(s[i+1])<<".";
}
}
for(i=pos+1;i<n;i++)
{
cout<<s[i];
}
return 0;
}

int lastindexof(char s[],char c)
{ 
int i;
for(i=strlen(s)-1;i>0;i--)
{
if(s[i]==c)
{
return i;
break;
}
}
}

char touppercase(char s)
{
if(s>='a'&&s<='z')
{
return (char)(s-32);
}
else
{
return s;
}
}