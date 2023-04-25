#include<iostream>
using namespace std;

int main()
{
  double i,j,n,fact=1,sum=0,sum1=0,k;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<"!";
for(k=1;k<=j;k++)
{
fact=fact*k;
}
sum1=sum1+fact;
fact=1;
if(j<i)
{
cout<<"+";
}
}
cout<<"/"<<i;
if(i<n)
{
cout<< " + ";
}
sum=sum+(double)sum1/i;
sum1=0;
}
cout<<"sum of seriese="<<sum;
}