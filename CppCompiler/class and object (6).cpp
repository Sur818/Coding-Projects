#include<iostream>
using namespace std;

class facto
{
public:
int n,i,fact=1;

facto(int x)
{
n=x;
cout<<factorial(n);
}

private:
int factorial(int n)
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}

};

int main ()
{
int n;
cout<<"enter no whose factoial you want:-\n";
cin>>n;
facto obj(n);
}


