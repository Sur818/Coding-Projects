#include<iostream>
using namespace std;
char  maxnoof_repeatletter(string s)
{
int i,n,j;
n=s.length();
char ch;
int count=0,m=0,index,ans=0;
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if(s[i]==s[j])
{
count++;
}
if(ans<count)
{
ch=s[i];
}
ans=max(ans,count);

}
}
return ch;
}


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
char ch=maxnoof_repeatletter(s1);
cout<<"max repeating charecter in word:- "<<s1<<"="<<ch<<"\n";

if(ch=='\0')
{
cout<<"no repeating charecter's:--\n";
}
k=i+1;
count=0;
}
}
}