#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int i,n,j,sum=0,prod=1,k=1;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
cout<<k<<"^"<<k;
sum=sum+pow(k,k);
k++;
}
else
{
for(j=1;j<=k;j++) 
{
cout<<j<<"^"<<j;
if(j<k)
cout<<"*";
prod=prod*pow(j,j);
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
    