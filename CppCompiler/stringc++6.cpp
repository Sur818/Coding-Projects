#include<iostream>
using namespace std;
string rem_duplictn(string s)
{
int i,n,j,k;
n=s.length();
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]==s[j])
{
for(k=j;k<n;k++)
{
s[k]=s[k+1];
}
i--;
n--;
}
}
}
return s;
}

int main()
{
   string s,s2,s3;
cout<<"enter string:";
getline(cin,s);
s=s+" ";
int i,k=0,count=0;
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s2=s.substr(k,count-1);
s3=rem_duplictn(s2);
cout<<s3<<" ";
k=i+1;
count=0;
}
}
}
