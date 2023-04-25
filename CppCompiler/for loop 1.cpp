#include<iostream>
using namespace std;

int main()
{
int n,i,sum=0;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
sum=sum+i;
cout<<i;
if(i<n)
{
cout<<"+";
}
}
cout<<"\nsum of  series="<<sum;
return 0;
}