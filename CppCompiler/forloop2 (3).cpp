#include<iostream>
using namespace std;

int main()
{
double i,n,sum=0;
cout<<"enter no:-";
cin>>n;
for(i=1;i<=n;i++)
{
 cout<<"1"<<"/"<<i;
if(i<n)
{
cout<<"+";
}
sum=sum+1/i;
}
cout<<"sum of series="<<sum;
return 0;
}