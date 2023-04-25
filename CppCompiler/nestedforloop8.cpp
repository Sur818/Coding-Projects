#include<iostream>
using namespace std;

int main()
{
int i,n,j;
double sum=0,sum1=0;
cout<<"enter no";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
sum=sum+j;
if(j<i)
{
cout<<"+";
}
}
cout<<"/"<<i;
if(i<n)
{
cout<<" + ";
}
sum1=sum1+(double)sum/i;
sum=0;
}
cout<<"sum of seriese"<<sum1;
}