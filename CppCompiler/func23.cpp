#include<iostream>
using namespace std;
int square (int a)
{
return a*a;
}

int main()
{
int n,temp;
cout<<"enter any no";
cin>>n;
temp=square(n);
cout<<"squre of no="<<temp;
return 0;
}