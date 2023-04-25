#include<iostream>
using namespace std;

int main()
{
  char str[100],temp;
int i,n;
cout<<"enter string:-";
cin.get(str,100);
n=strlen(str);
for(i=0;i<n/2;i++)
{
temp=str[i];
str[i]=str[n-1-i];
str[n-1-i]=temp;
}
for(i=0;i<n;i++)
{
cout<<str[i]<<"\n";
}
return 0;
}
