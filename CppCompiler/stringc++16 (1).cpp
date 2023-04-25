#include<iostream>
using namespace std;
bool check_word(string s)
{
int i,j,n=s.length(),check=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
if(s[i]==s[j])
{
check++;
return false;
break;
}
}
}
}
if(check==0)
{
return true ;
}
}

int main()
{
  string s,s1,s2="";
cout<<"find maxlength substring having no reapeating charecter:------>\n\n";
cout<<"enter string:-";
getline (cin,s);
int i,j,n,length=0,temp;
n=s.length();
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
s1=s.substr(i,j);
if(check_word(s1))
{
temp=s1.length();
if(length<temp)
{
s2=s1;
}
length=max(length,temp);
}
}
}
cout<<s2;
}
