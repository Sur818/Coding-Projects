#include<iostream>
using namespace std;

int main()
{
  int i,n,sum=0;
cout<<"enter range=";
cin>>n;
for(i=1;(i+2)<=n;i++)
{
cout<<i<<"*"<<(i+2);
if((i+2)<n)
{
cout<<" + ";
}
sum=sum+i*(i+2);
}
cout<<"\nsum of seriese="<<sum;
return 0;
}