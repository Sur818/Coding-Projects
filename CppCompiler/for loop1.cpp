#include<iostream>
using namespace std;

int main()
{
 int n,i,j,prod=1,sum=0;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
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
if(i<n)
{
cout<<" + ";
}
}
cout<<"sum of seriese="<<sum<<endl;
return 0;
}