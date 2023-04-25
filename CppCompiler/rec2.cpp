#include<iostream>
using namespace std;

int fact(int x)
{
if(x<1)
{
return 1;
}
return x*fact(x-1);
}

int main()
{
int n,num;
cout<<"enter no:-";
cin>>n;
num=fact(n);
cout<<"sum of natural no ="<<num;
}


