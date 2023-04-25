#include<iostream>
using namespace std;

int main()
{
double i,n,k=0,sum=0;
cout<<"enter no of term";
cin>>n;
for(i=1;++k<=n;i++)
{
cout<<"1/"<<(i)<<"^"<<2;
if(k<n)
{
cout<<" + ";
}
sum=sum+1/(i*i);
}
cout<<"sum of series="<<sum;
return 0;
}