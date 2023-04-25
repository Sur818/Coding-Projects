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
   string s,s2,s1;
int k=0;
cout<<"enter string:-";
getline(cin,s);
s=s+" ";
cout<<"\n\npalindrome word present in string:--\n\n";
int i,count=0;
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s2=s.substr(k,count-1);
if(ispalindrome (s2))
{
cout<<s2<<" ";
}
k=i+1;
count=0;
}
}
}
