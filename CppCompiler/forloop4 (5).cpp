#include<iostream>
using namespace std;

int main()
{
 int n,i,sum=0,j,k=0,prod=1;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
k=0;
for(j=i;++k<=3;j++)
{
cout<<j;
if(k<3)
{
cout<<"*";
}
prod=prod*j;
}
if(i<n)
{
cout<<" + ";
}
sum=sum+prod;
prod=1;
}
cout<<"sum of seriese="<<sum;
return 0;
}