#include<iostream>
using namespace std;

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
int i,n,k=0,count=0,check=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
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

return 0;
}
