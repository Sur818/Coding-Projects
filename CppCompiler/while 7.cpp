#include<iostream>
using namespace std;

int main()
{
 int sum=0,n,n1;
cout<<"enter no:-";
cin>>n;
while(n!=0)
{
n1=n%10;
sum=sum+n1;
n=n/10;
};
cout<<"sum of digits=:-"<<sum<<endl;
return 0;
}