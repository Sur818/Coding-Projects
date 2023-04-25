#include<iostream>
using namespace std;

int main()
{
double i,j,n,sum=0,fact=1;
cout<<"enter no:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"/"<<i<<"!";
if(i<n)
{
cout<<"+";
}
for(j=1;j<=i;j++)
{
fact=fact*j;
}
sum=sum+(i/fact);
fact=1;
}
cout<<"="<<sum;
return 0;
}