#include<iostream>
using namespace std;
bool check_wordpr(string s,string s2)
{
int i,count=0,flag=0,k=0;
string s1;
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
if(s1.compare(s2)==0)
{
flag++;
return true;
}
k=i+1;
count=0;
}
}
if(flag==0)
{
return false;
}
}

int main()
{
 string s,word,s2,s1, replace;
cout<<"enter string:-";
getline (cin,s);
s=s+" ";
cout<<"which word wants to replace:-";
cin>>word;
cout<<"from which word replace:-";
cin>>replace;
int i,n,k=0,count=0, flag=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
if(check_wordpr(s,word))
{
 flag++;
if(s1.compare(word)==0)
{
cout<<replace<<" ";
}
else
{
cout<<s1<<" ";
}
k=i+1;
count=0;
}
}
}
if(flag==0)
{
cout<<"word not present in this scope:--";
}

return 0;
}
