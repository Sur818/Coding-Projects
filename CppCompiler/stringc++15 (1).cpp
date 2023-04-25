#include<iostream>
using namespace std;

int main()
{
  string s,s1,s2;
cout<<"enter string:-";
getline (cin,s);
cout<<"enter first pair of anagram word:-";
cin>>s2;
cout<<"\n\nthe anagram pair of second word:--\n\n";
sort(s2.begin(),s2.end());
int i,j,n,count=0,k=0;
s=s+" ";
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
sort(s1.begin(),s1.end());
if(s1.compare(s2)==0)
{
cout<<s1;
}
k=i+1;
count=0;
}
}
}
