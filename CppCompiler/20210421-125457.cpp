#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  double n,i,sum=0;
cout<<"enter integer:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"ln("<<i<<")";
if(i<n)
{
cout<<"+";
}
sum=sum+log(i);
}
cout<<"sum of seriese="<<sum;
return 0;
}
