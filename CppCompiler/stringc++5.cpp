#include<iostream>
using namespace std;

int main()
{
  string s,s1,s2;
cout<<"\n\nmax length word present are:--\n\n";
cout<<"enter string:-";
getline(cin,s);
int i,count=0,k=0,ans=0;
s=s+" ";
for(i=0;i<s.length();i++)
{
count++;
if(s.at(i)==' ')
{
s1=s.substr(k,count-1);
int length=s1.length();
if(ans<length)
{
s2=s1;
}
ans=max(ans,length);
k=i+1;
count=0;
}
}
cout<<s2;
}