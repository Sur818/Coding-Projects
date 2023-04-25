#include<iostream>
using namespace std;

int main()
{
 string s,s1,s2;
cout<<"enter string:-";
getline (cin,s);
s=s+" ";
cout<<"which word wants to search:-";
cin>>s1;
int i,n,count=0,pos=0,k=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
pos++;
s2=s.substr(k,count-1);
if(s1.compare(s2)==0)
{
cout<<"\n\nword are present at position:--"<<pos;
}
k=i+1;
count=0;
}
}
return 0;
}
