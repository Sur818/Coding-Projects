#include<iostream>
using namespace std;

int main()
{
 int i,n,sum=0;
cout<<"enter no";
cin>>n;
for(i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
sum=sum+n*i;
}
cout<<sum;
return 0;
}