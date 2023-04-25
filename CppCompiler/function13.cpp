#include<iostream>
using namespace std;

double add(int a,int b)
{
double c=a/b;
return c;
}
int main()
{
int n,m;
double res;
cout<<"enter two no";
cin>>n>>m;
res=add(n,m);
cout<<n<<"/"<<m<<"="<<res;
}
