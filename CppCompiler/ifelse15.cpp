#include<iostream>
using namespace std;

int main()
{
int no;
cout<<"enter no";
cin>>no;
if(no!=0)
{
if(no%2==0)
{
cout<<"even no";
}
else
{
cout<<"odd no";
}
}
else
{
cout<<"no is zero both even and odd";
}
return 0;
}
