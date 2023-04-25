#include<iostream>
using namespace std;

int main()
{
  char str[100],temp;
int i,n;
cout<<"enter string:-";
cin.get(str,100);
n=strlen(str);
sort(str,str+n);

for(i=0;i<n;i++)
{
cout<<str[i]<<endl;
}
}
