#include<iostream>
using namespace std;

int main()
{
int i,flag=0;
 string s;
cout<<"enter string:-";
getline(cin,s);
if(s.at(0)=='0')
{
cout<<"NOT DUCK NO";
}
else
{
for(i=0;i<s.length();i++)
{
if(s[i]=='0')
{
flag++;
break;
}
}
if(flag!=0)
{
cout<<"DUCK NO";
}
else
{
cout<<"NOT DUCK NO";
}
}
return 0;
}