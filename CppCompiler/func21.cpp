#include<iostream>
using namespace std;


int add(int n,int b=0)
{
return n+b;
}



int main()
{
int n,sum=0;
do
{
cout<<"enter no:-";
cin>>n;
sum=sum+add(n);
}while (n!=0);
cout<<"sum="<<sum;
}



