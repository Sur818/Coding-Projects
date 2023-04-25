#include<iostream>
using namespace std;
class A
{
public:
void m1()
{
cout<<"hello ";
}
};

class B: public A
{
public:
void m1()
{
cout<<"word!";
}
};

int main()
{
B obj;
obj.m1();
//obj.m2();
}
