#include<iostream>
using namespace std;

class addition
{
public:
int a;
addition operator +( addition obj)
{
addition temp;
temp.a=a+obj.a;
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
obj3=obj1+obj2;
obj3.display();
}
