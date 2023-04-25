#include<iostream>
using namespace std;

int main()
{
int i,a,d,l,sum=0;
cout<<"enter first term";
cin>>a;
cout<<"enter common difference";
cin>>d;
cout<<"enter last term";
cin>>l;
for(i=a;i<=l;i=i+d)
{
sum=sum+i;
cout<<i;
if(i<l)
{
cout<<"+";
}
}
cout<<"sum of series"<<sum;
return 0;
}