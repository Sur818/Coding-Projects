#include<iostream>
using namespace std;

class abc
{
public:
int a,b;
void sum()
{
cout<<"sum of both no:-"<<a+b<<endl;
}

void multiple ()
{
cout<<"multiplication of both no:-"<<a*b;
}
};

int main()
{
abc obj;
obj.a=10;
obj.b=20;
obj.sum();
obj.multiple();
}


