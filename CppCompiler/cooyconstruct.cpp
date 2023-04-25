#include<iostream>
using namespace std;

class abc
{
public:
int a,b;
abc(int x,int y)
{
a=x;
b=y;
}
abc(abc &obj)
{
a=obj.a+obj.b;
b=obj.b;
}
void sum()
{
cout<<"sum of both no:-"<<a+b<<endl;
}
};

int main()
{
abc obj(10,20);
obj.sum();
//abc obj1(obj);
abc obj1=obj;
obj1.sum();
}
