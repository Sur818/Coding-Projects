#include<iostream>
using namespace std;

int main()
{
int i,n;
double sum=0,k=0;
cout<<"enter no of term";
cin>>n;
for(i=1;++k<=n;i++)
{
if(i%2==0||i%5==0)
{
--k;
continue;
}
cout<<"1/"<<i;
if(k<n)
{
cout<<"+";
}
sum=sum+(double)1/i;
}
cout<<"="<<sum;
return 0;
}
  