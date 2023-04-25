#include<iostream>
using namespace std;

int add(int a,int b)
{
int c=a*b;
return c;
}
int main()
{
int n,m,res;
cout<<"enter two no";
cin>>n>>m;
res=add(n,m);
cout<<n<<"*"<<m<<"="<<res;
}
