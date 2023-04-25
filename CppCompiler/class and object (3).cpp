#include<iostream>
using namespace std;

class areaofT
{
public:
double h,b,a;
void  area()
{
a=0.5*h*b;
cout<<a;
}
};

int main()
{
areaofT obj;
cout<<"enter heigh:-";
cin>>obj.h;
cout<<"enter base:-";
cin>>obj.b;
obj.area();
return 0;
}
    