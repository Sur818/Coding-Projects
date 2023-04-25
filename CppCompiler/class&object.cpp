#include<iostream>
using namespace std;
class Subject
{
public:
int a, b;
Subject(int x,int y)
{
a=x;
b=y;
m1();
}
private:
void m1()
{
cout<<a+b;
}
};
int main ()
{
Subject sub(10,20);
}