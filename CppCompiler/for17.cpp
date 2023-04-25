#include<iostream>
using namespace std;

int main()
{
 int i,n,sum=0;
cout<<"enter no";
cin>>n;
for(i=1;i<=10;i++)
{
if(i%2==0)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
sum=sum+i;
}
}
cout<<"sum of even table="<<sum;
return 0;
}

