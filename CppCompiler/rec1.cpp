#include<iostream>
using namespace std;

int sum(int x)
{
if(x==0)
{
return 0;
}
return x+sum(x-1);
}

int main()
{
int n,num;
cout<<"enter no:-";
cin>>n;
num=sum(n);
cout<<"sum of natural no ="<<num;
}


