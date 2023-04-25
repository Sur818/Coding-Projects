#include<iostream>
using namespace std;

int main()
{
int n,sum=0;
cout<<"enter no";
cin>>n;
sum=sum+n;
while (n!=0)
{
cout<<"enter no";
cin>>n;
if(n>0)
{
sum=sum+n;
}
}
cout<<"sum of positive no:="<<sum;
return 0;
}