#include<iostream>
using namespace std;

int main()
{
  string s;
cout<<"enter string:-";
getline(cin,s);
int i;
s=" "+s;
for(i=0;i<s.length();i++)
{
if(s.at(i)==' ')
{
s[i+1]=toupper(s[i+1]);
}

}
cout<<s;
}