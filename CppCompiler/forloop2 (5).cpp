#include<iostream>
using namespace std;

int main()
{
double i,n,sum=0;
cout<<"enter no:-";
cin>>n;
for(i=1;i<n;i++)
{
 cout<<i<<"/"<<(i+1);
if(i<n)
{
cout<<"+";
}
sum=sum+i/(i+1);
}
cout<<"sum of series="<<sum;
return 0;
}