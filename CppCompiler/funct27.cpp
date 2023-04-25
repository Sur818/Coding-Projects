#include<iostream>
using namespace std;


int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}


int main()
{
  double i,j,n,sum=0,sum1=0;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<"!";
sum1=sum1+factorial(j);
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