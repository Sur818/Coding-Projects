#include<iostream>
using namespace std;
bool ispalindrome(string s)
{
string s1=s;
reverse(s.begin(),s.end());
if(s1.compare(s)==0)
{
return true;
}
else
{
return false;
}
}

int main()
{
string s,s1="",s2;
cout<<"enter string:-";
getline (cin,s);
int i,j,n,length=0,temp;
n=s.length();
for(i=0;i<n;i++)
{
s1=s[i];
for(j=0;j<n;j++)
{
if(i!=j)
{
s1=s1+s[j];
if(ispalindrome(s1))
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
//cout<<s2;
}
return 0;
}
    