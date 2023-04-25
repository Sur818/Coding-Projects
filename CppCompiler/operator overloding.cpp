#include<iostream>
using namespace std;

class addition
{
public:
int a;
addition operator +(int x)
{
addition temp;
temp.a=a+x;
}

void display()
{
cout<<"a="<<a<<endl;
}
};

int main()
{
addition obj1,obj2,obj3;
obj1.a=50;
obj2.a=10;
obj3=obj1+5;
obj3.display();
}
