#include<iostream>
using namespace std;

int main()
{
  string s;
cout<<"enter string:-";
getline (cin,s);
int i,n;
n=s.length();
for(i=0;i<n;i++)
{
if(s[i-1]%2!=0&&s[i]%2!=0)
{
cout<<"-";
}
cout<<s[i];
}
return 0;
}
