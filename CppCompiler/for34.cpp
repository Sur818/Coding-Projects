#include<iostream>
using namespace std;

int main()
{
int i,n,k=0,sum=0;
cout<<"enter no of term";
cin>>n;
for(i=1;++k<=n;i++)
{
cout<<i<<"*"<<(i+1);
if(k<n)
{
cout<<" + ";
}

sum=sum+i*(i+1);
}
cout<<"\nsum of series="<<sum;
return 0;
}

  