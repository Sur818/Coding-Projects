#include<iostream>
using namespace std;

int main()
{
int i,j=0,k=0,t,count=0,flag=0;
 string s,ss;
string s1[s.length()],s2[ss.length()];
cout<<"enter first string:-";
getline(cin,s);
cout<<"Enter second string:-";
getline(cin,ss);
ss=ss+" ";
s=s+" ";
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s1[j++]=s.substr(k,count-1);
count=0;
k=i+1;
}
}
j=0;
k=0;
for(i=0;i<ss.length();i++)
{
count++;
if(ss[i]==' ')
{
s2[j++]=ss.substr(k,count-1);
count=0;
k=i+1;
}
}
cout<<"common word between two string:-\n";
for(i=0;s1[i]!='\0';i++)
{
flag=0;
for(j=0;s2[j]!='\0';j++)
{
if(s1[i]==s2[j])
{
flag++;
s2[j]='';
}
}
if(flag!=0)
cout<<s1[i]<<" ";
}
}



