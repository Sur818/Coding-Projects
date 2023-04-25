#include<iostream>
using namespace std;

int main()
{
int i,n,k=0,sum=0;
cout<<"enter no of term";
cin>>n;
for(i=2;++k<=n;i+=4)
{
cout<<i<<"*"<<(i+2);
if(k<n)
{
cout<<" + ";
}
sum=sum+i*(i+2);
}
cout<<"sum of series="<<sum;
return 0;
}