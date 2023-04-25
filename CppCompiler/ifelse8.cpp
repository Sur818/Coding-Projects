#include<iostream>
using namespace std;

int main()
{
 int a,b;
cout<<"enter two no"<<endl;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping\n";
cout<<"a="<<a<<"\n"<<"b="<<b;
return 0;
}