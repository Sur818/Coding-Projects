#include<iostream>
using namespace std;

int main()
{
 int n,i,prod=1;
cout<<"enter no";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==0&&i%5==0)
{
continue;
}
cout<<i;
if(i<n)
{
cout<<"*";
}
prod=prod*i;
}
cout<<"\n"<<(long)prod;
return 0;
}