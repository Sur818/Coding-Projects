#include<iostream>
using namespace std;

int main()
{
int a,b;
int *ptr1=&a;
int *ptr2=&b;
cout<<"enter two no:-";
cin>>*ptr1>>*ptr2;
int sum=*ptr1+*ptr2;
cout<<"sum of both no :-"<<sum;
}