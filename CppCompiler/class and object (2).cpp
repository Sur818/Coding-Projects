#include<iostream>
using namespace std;

class rectangle
{
public:
int a,b;
void area()
{
cout<<"area of rectangle="<<a*b<<endl;
}

void perimeter()
{
cout<<"perimeter of ractangl="<<2*(a+b);
}
};

int main()
{
rectangle obj;
obj.a=10;
obj.b=20;
obj.area();
obj.perimeter();
}


    