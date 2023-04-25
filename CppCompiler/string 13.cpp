#include<iostream>
using namespace std;

int main()
{
int i,j=0,k=0,t,count=0;
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
cout<<"after removing duplicate word :\n";

for(i=0;i<j;i++)
{
for(k=i+1;k<j;k++)
{
if(s1[i]==s1[k])
{
for(t=k;t<j;t++)
{
s1[t]=s1[t+1];
}
j--;
i--;
}
}
}

for(i=0;i<j;i++)
{
cout<<s1[i]<<" ";
}
return 0;
}

