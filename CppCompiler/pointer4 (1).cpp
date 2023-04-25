#include<iostream>
using namespace std;
void display (int *n)
{
cout<<"entered no="<<*n;
}

int main()
{
int n;
cout<<"enter no:-";
cin>>n;
display (&n);
}