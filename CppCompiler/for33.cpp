#include<iostream>
using namespace std;

int main()
{
cout<<" hp series---------\n";
 double i,n,d,k=0,a;
double sum=0.0000000;
cout<<"enter no of term Ap;-";
cin>>n;
cout<<"first term=";
cin>>a;
cout<<"enter common difference of Ap=";
cin>>d;
for(i=a;++k<=n;i+=d)
{
sum=sum+1/i;
cout<<"1/"<<i<<" ";
if(k==n)
{
cout<<"\n";
cout<<n<<"th term if series="<<"1/"<<i;
}
}
cout<<"\nsum of HP series="<<sum;
return 0;
}