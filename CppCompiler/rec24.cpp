#include<iostream>
using namespace std;

string str(string s,int n)
{
static int i=0;
char ch;
if(i<n/2)
{
ch=s[i];
s[i]=s[n-1-i];
s[n-1-i]=ch;
i++;
return str(s,n);
}
else
return s;
}


int main()
{
 string s;
cout<<"enter name:-";
getline(cin,s);
int n=s.length();
cout<<str(s,n);
}