#include<iostream>
using namespace std;

int main()
{
 int count=0,n;
cout<<"enter no:-";
cin>>n;
while(n!=0)
{
n=n/10;
count++;
};
cout<<"no of digits=:-"<<count<<endl;
}