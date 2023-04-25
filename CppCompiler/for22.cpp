#include<iostream>
using namespace std;

int main()
{
int i,n,sum,n1;
cout<<"enter any no";
cin>>n;
sum=n;
while(sum>=9)
{
sum=0;
while(n!=0)
{
n1=n%10;
sum=sum+n1;
n=n/10;
}
n=sum;
}
cout<<sum;
return 0;
}

