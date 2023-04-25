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
factorial obj(5);
get_factorial(obj);
}
