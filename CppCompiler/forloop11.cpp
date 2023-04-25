#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double i,n,k=0,sum=0;
cout<<"enter no";
cin>>n;
for(i=1;++k<=n;i++)
{
cout<<i<<"/"<<i<<"^"<<i;
if(k<n)
{
cout<<" + ";
}
sum=sum+i/pow(i,i);
}
cout<<"\n"<<sum;
return 0;
}