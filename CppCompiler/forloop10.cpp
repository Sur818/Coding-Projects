#include<iostream>
using namespace std;

int main()
{
  
double i,n,k=0,sum=0;
cout<<"enter no of term";
cin>>n;
for(i=1;++k<=n;i++)
{
cout<<i<<"/"<<i<<"+"<<i+1<<"^"<<2;
if(k<n)
{
cout<<" + ";
}
double temp=((i+1)*(i+1));
double b=i+temp;
sum=sum+1/b;
}
cout<<"sum of series="<<sum;
return 0;
}
