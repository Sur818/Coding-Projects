#include<iostream>
using namespace std;

int main()
{
 int a,b,temp;
cout<<"enter first no a:-";
cin>>a;
cout<<"enter second no b:-";
cin>>b;
temp=a;
a=b;
b=temp;
cout<<"a="<<a<<"\n"<<"b="<<b;
}