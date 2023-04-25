#include<iostream>
using namespace std;
bool compare(string ,string);

int main()
{
 string s1;
 string s2;
cout<<"enter string1:-";
getline(cin,s1);
cout<<"enter string:-";
getline(cin,s2);
if(compare(s1,s2))
{
cout<<"equal string:--";
}
else
{
cout<<"not equal string:--";
}
}

bool compare(string s1,string s2)
{
if(s1==s2)
{
return true;
}
else
{
return false;
}
}

