#include<iostream>
using namespace std;
bool is_notdigit(char s)
{
if(!(s>='0'&&s<='9'))
return true;
else
return false;
}

int main()
{
 string s;
int s2;
cout<<"enter string:-";
getline(cin,s);
int i,n,length=0;
n=s.length();
for(i=0;i<n;i++)
{
if(s[i]>='A'&&s[i]<='Z')
{
s2=(int)s[i];
cout<<s2;
if(s[i+1]>='0'&&s[i+1]<='9')
{
cout<<"~";
}
else if(i<n-1)
{
cout<<"_";
}
}
else if(s[i]>='a'&&s[i]<='z')
{
s2=(int)(s[i]-'a'+1);
cout<<s2;
if(s[i+1]>='0'&&s[i+1]<='9')
{
cout<<"~";
}
else if(i<n-1)
{
cout<<"_";
}
}
else if(s[i]>='0'&&s[i]<='9')
{
s2=(char)s[i]-48+1;
cout<<s2;
if(is_notdigit(s[i+1])&&i<n-1)
{
cout<<"~";
}
}
else if(i<n-1)
{
cout<<s[i]<<"_";
}
}
return 0;
}


    