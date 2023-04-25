#include<iostream>
using namespace std;

int main()
{
int a,b,temp;
cout<<"enter two no"<<endl;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
temp=a;
a=b;
b=temp;
cout<<"after swapping\n";
cout<<"a="<<a<<"\n"<<"b="<<b;
return 0;
}