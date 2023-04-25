#include<iostream>
using namespace std;

int main()
{
  int n,i,fact=1;
cout<<"enter no want to factorial";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<n<<"!"<<"="<<fact;
return 0;
}