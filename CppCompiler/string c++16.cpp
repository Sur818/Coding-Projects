#include<iostream>
using namespace std;

int main()
{
  string s,sd,s1;
cout<<"enter string:-";
getline(cin,s);
cout<<"which word wants to delete:-";
cin>>sd;
int i,j,n,k=0,count=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
if(s1.compare(sd)!=0)
{
cout<<s1<<" ";
}
k=i+1;
count=0;
}
}
return 0;
}
