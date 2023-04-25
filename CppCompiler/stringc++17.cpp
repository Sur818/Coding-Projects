#include<iostream>
using namespace std;

int main()
{
  string s,s1,s2;
cout<<"enter string:-";
getline(cin,s);
cout<<"which word wants to reverse:-";
cin>>s2;
s=s+" ";
int i,n,k=0,count=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
if(s1.compare(s2)==0)
{
reverse(s1.begin(),s1.end());
cout<<s1<<" ";
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
