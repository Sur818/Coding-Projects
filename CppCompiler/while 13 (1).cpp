#include<iostream>
using namespace std;

int main()
{
 int i,n,sum;
cout<<"enter no:-";
cin>>n;
while(sum>=10)
{
sum=0;
while(n!=0)
{
sum=sum+n%10;
n=n/10;
};
n=sum;
};
cout<<"sum of digits to single digits="<<sum<<endl;
}