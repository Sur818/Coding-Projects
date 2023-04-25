#include<iostream>
using namespace std;

int evenodd(int n)
{
if(n%2==0)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
int n,f;
cout<<"enter no=";
cin>>n;
f=evenodd(n);
if(f==1)
{
cout<<"even no";
}
else
{
cout<<"odd no";
}
return 0;
}