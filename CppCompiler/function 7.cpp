#include<iostream>
using namespace std;

int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
int n,fact;
cout<<"enter no";
cin>>n;
fact=factorial(n);
cout<<"factorial of given no="<<fact;
return 0;
}
