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
if(s[i]>='0'&&s[i]<='9')
{
cout<<s[i];
if(!((s[i+1])>='0'&&(s[i+1])<='9'))
{
cout<<",";
}
}
}
}

    