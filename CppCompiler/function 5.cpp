#include<iostream>
using namespace std;

void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"a="<<a<<"\n"<<"b="<<b;
}
int main()
{
int a,b;
cout<<"enter two no";
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"after swaping=";
swap(a,b);
return 0;
}