#include<iostream>
using namespace std;

int main()
{
string s,s1,s2,s3;
cout<<"enter string:-";
getline(cin,s);
cout<<"which word want to insert:-";
getline(cin,s1);
cout<<"after which word:-";
getline(cin,s2);
int i,n,count=0,k=0;
s=s+" ";
n=s.length();
for(i=0;i<n+1;i++)
{
count++;
if(s[i]==' ')
{
s3=s.substr(k,count-1);
if(s3.compare(s2)==0)
{
s1=s1+" ";
s.insert(k+count,s1);
}
k=i+1;
count=0;
}
}
cout<<s;
return 0;
}

