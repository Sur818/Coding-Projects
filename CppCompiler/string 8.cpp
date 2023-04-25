#include<iostream>
using namespace std;
bool charecter_isletter(char );
bool charecter_uppercase(char);
bool charecter_lowercase(char );
int main()
{
cout<<"program to convert plain text into cypher text---->\n\n";
 char s[10];
int i,n,a;
cout<<"enter string:-";
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
char ch=s[i];
if(charecter_isletter(ch))
{
a=ch+13;
if(charecter_uppercase(ch)&&a>90||charecter_lowercase(ch)&&a>122)
{
a=a-26;
}
ch=(char)a;
}
s[i]=ch;
cout<<s[i];
}
}


bool charecter_isletter(char c)
{
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
return true;
}
else
{
return false;
}
}


bool charecter_uppercase(char ch)
{
if(ch>='A'&&ch<='Z')
{
return true;
}
else
return false;
}

bool charecter_lowercase(char ch)
{
if(ch>='a'&&ch<='z')
{
return true;
}
else
{
return false;
}
}
    