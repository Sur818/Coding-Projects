#include<iostream>
using namespace std;

int main()
{
  string s,s1,s2="";
cout<<"enter string:-";
getline(cin,s);
s=s+" ";
int i,count=0,k=0,pos=1;
for(i=0;i<s.length();i++)
{
count++;
if(s.at(i)==' ')
{
s1=s.substr(k,count-1);
if(pos%2==0)
{
reverse(s1.begin(),s1.end());
s2=s2+s1+" ";
}
else
{
s2=s2+s1+" ";
}
pos=pos+1;
count=0;
k=i+1;
}
}
cout<<s2;
}


 