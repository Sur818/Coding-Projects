#include<iostream>
using namespace std;

int main()
{
int i,k=1,n,sum=0;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<k<<"*"<<(k+1);
if(i<n);
{
cout<<"+";
}
sum=sum+k*(k+1);
k=k+2;
}
cout<<"sum of series="<<sum<<endl;
return 0;
}

