#include<iostream>
using namespace std;

int main()
{
 string s,s1="";
cout<<"enter string:-";
getline (cin,s);
s=s+" ";
int i,n;
cout<<"how many times it wants to concat:-";
cin>>n;
for(i=0;i<n;i++)
{
s1=s1+s+" ";
} 
cout<<s1;
return 0;
}