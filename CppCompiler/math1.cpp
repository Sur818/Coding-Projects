#include<iostream>
using namespace std;

int main()
{
 int a,b,c;
cout<<"enter a,b,c";
cin>>a>>b>>c;
c=a+b+c;
b=c-b;
a=c-a;
cout<<"c="<<c<<"\n"<<"b="<<b<<"\n"<<"a="<<a;
return 0;
}