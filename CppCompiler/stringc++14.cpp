#include<iostream>
using namespace std;
bool ispalindrome(string s)
{
string s1=s;
reverse(s.begin(),s.end());
cout<<s1<<endl;
if(s1==s)
return true;
else
return false;
}

int main()
{
 cout<<"\n program to longest pelindrome substring\n\n";
string s,s1,s2;
cout<<"enter string:-";
getline(cin,s);
int i,j,n,length=0,n1,count=0;
n=s.length();
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
count++;
if(s[i]==s[j])
{
s1=s.substr(i,count+1);
if(ispalindrome(s1))
{
n1=s1.length();
if(length<n1)
{
s2=s1;
}
length=max(length,n1);
}
}
}
count=0;
}
cout<<"\nlongest pelindrome substring"<<s2;
}



