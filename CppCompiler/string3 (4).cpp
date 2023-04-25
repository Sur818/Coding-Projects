#include<iostream>
using namespace std;

int main()
{
int i,n,count=1;
  char s[100];
cout<<"enter string:-";
cin.get(s,100);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]==' ')
{
count++;
}
}
cout<<"no is words="<<count;
}

