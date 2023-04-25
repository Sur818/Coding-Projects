#include<iostream>
using namespace std;

int main()
{
double i,n,sum=0,k=0;
cout<<"enter no of term:-";
cin>>n;
for(i=1;++k<=n;i++)
{
 cout<<"1"<<"/"<<(i+1)<<"*"<<(i+1);
if(i<n)
{
cout<<" + ";
}
sum=sum+1/(i+1)*(i+1);
}
cout<<"sum of series="<<sum;
return 0;
}