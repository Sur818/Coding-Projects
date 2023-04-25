#include<iostream>
using namespace std;

int main()
{
  char s[100];
int i,j,n,flag=0;
cout<<"enter string:-";
gets(s);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]==s[j])
{
flag++;
break;
}
}
}
if(flag==0)
{
cout<<"unique words";
}
else
{
cout<<"not unique word:-";
}
}
