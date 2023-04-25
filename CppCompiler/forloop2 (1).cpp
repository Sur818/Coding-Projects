#include<iostream>
using namespace std;

int main()
{
int i,n,sum=0;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"*"<<(i+1);
if(i<n);
{
cout<<"+";
}
sum=sum+i*(i+1);
}
cout<<"sum of series="<<sum<<endl;
return 0;
}

