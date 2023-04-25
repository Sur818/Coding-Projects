#include<iostream>
using namespace std;

class factorial
{
public:
int n;
factorial(int n)
{
this->n=n;
}
};

void get_factorial(factorial obj)
{
int i,fact=1;
for(i=1;i<=obj.n;i++)
{
fact=fact*i;
}
cout<<"factorial of given no:-"<<fact;
}

int main()
{
int n;
cout<<"enter no:-";
cin>>n;
factorial obj(n);
get_factorial(obj);
}
