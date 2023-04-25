#include<iostream>
using namespace std;
void odd_even(int*n)
{
if(*n%2==0)
cout<<"even no:-";
else
cout<<"odd no:-";
}
int main()
{
int n;
cout<<"enter no:-";
cin>>n;
odd_even(&n);
}