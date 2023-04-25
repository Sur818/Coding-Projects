#include<iostream>
using namespace std;

int main()
{
int i,n;
  char s[100];
cout<<"enter string:-";
cin>>s;
n=strlen(s);
for(i=0;i<n;i++)
{
cout<<s[n-1-i]<<" ";
}

return 0;
}