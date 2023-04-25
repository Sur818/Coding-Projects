#include<iostream>
using namespace std;

int factor(int n,int i=2)
{
if(n>1)
{
if(n%i==0)
{
cout<<i<<" ";
return factor(n/i,i);
}
return factor(n,i+1);
}
}

int main()
{
int n;
cout<<"enter no";
cin>>n;
factor(n);
}
