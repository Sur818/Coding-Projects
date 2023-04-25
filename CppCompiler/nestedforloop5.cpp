#include<iostream>
using namespace std;

int main()
{
  int n,i,sum=0,prod=1;
cout<<"enter no";
cin>>n;
for(i=1;n!=0;i++)
{
sum=sum+(n%10);
prod=prod*(n%10);
n=n/10;
}
if(sum==prod)
{
cout<<"spy no";
}
else
{
cout<<"not spy no";
}
return 0;
}
