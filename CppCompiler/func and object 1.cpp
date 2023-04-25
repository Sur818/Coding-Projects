#include<iostream>
using namespace std;
class Area
{
  public:
double radius;
Area(double r)
{
radius=r;
}
};

void Areaofcircle(Area a)
{
double A= 3.14*a.radius*a.radius;
cout<<"area="<<A;
}

int main()
{
double r;
cout<<"enter area of circle:-";
cin>>r;
Area obj(r);
Areaofcircle(obj);
}
