#include<iostream>
using namespace std;

class Area
{
public:
double a,b,r;
Area(double a, double b)
{
this->a=a;
this->b=b;
}

void circle()
{
double A;
A=3.14*r*r;
cout<<"area of circle="<<A<<endl;
}

void rectangle()
{
double A;
A=a*b;
cout<<"area of ractangle="<<A<<endl;
}

};

int main()
{
double r,a,b;
cout<<"enter length:-";
cin>>a;
cout<<"enter width:-";
cin>>b;
Area obj2(a,b);
obj2.rectangle();
cout<<"enter radius of circle:-";
cin>>obj2.r;
obj2.circle();
}

