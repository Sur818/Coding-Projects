#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int i,n,j,sum=0,prod=1;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++) 
{
cout<<j<<"^"<<j;
if(j<i)
cout<<"*";
prod=prod*pow(j,j);
}
if(i<n)
{
cout<<"+";
}
sum=sum+prod;
prod=1;
}
cout<<"sum of series="<<sum<<endl;
}
    