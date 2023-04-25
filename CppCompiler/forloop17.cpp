#include<iostream>
using namespace std;

int main()
{
double i,j,n,sum=0,fact=1,fact1=1;
cout<<"enter no:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"/"<<(i+1)<<"!"<<"+"<<(i+2)<<"!";
if(i<n)
{
cout<<" + ";
}
fact1=fact1*(i+1);
for(j=1;j<=(i+2);j++)
{
fact=fact*j;
}
sum=sum+(i/(fact1+fact));
fact=1;
}
cout<<"="<<sum;
return 0;
}