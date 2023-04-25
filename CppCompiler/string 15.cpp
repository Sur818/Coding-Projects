#include<iostream>
using namespace std;
bool unique_str(string);
int main()
{
int i,j,n,count,ans=0;
 string s,s1,s2;
cout<<"enter string:-";
getline(cin,s);
n=s.length();
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
count++;
s1=s.substr(i,count-1);
if(unique_str(s1))
{
if(s1.length()>ans)
{
s2=s.substr(i,count-1);
}
ans=max(ans,count-1);
}
}
}
cout<<"longest substring without reapeating charecter:-"<<s2<<endl;
return 0;
}


bool unique_str(string s)
{
int i,j,flag=0;
for(i=0;i<s.length();i++)
{
for(j=i+1;j<s.length();j++)
{
if(s[i]==s[j])
{
flag++;
return false;
break;
}
}
}
if(flag==0)
return true;
}
