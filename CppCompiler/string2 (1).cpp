#include<iostream>
using namespace std;

int main()
{
int i,j=0,k=0,count=0,flag=0;
 string s;
string s1[10];
cout<<"enter string:-";
getline(cin,s);
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
cout<<"duplicate words are :\n";

for(i=0;i<j;i++)
{
flag=0;
for(k=i+1;k<j;k++)
{
if(s1[i]==s1[k])
{
flag++;
s1[k]='\0';
}
}
if(flag!=0)
{
cout<<s1[i]<<endl;
}
}
return 0;
}

