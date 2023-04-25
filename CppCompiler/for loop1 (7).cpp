#include<iostream>
using namespace std;

int main()
{
int i,n,j,sum=0,prod=1;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
for(j=1;j<=i;j++)
{
if(j%2!=0)
{
cout<<j;
if(j<i)
cout<<"*";
prod=prod*j;
}
}
sum=sum+prod;
prod=1;
}
else
{
for(j=1;j<=i;j++) 
{
cout<<j;
if(j<i)
cout<<"*";
prod=prod*j;
}
sum=sum+prod;
prod=1;
}
if(i<n)
{
cout<<" + ";
}
}

cout<<"sum of series="<<sum<<endl;
}
    