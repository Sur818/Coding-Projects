#include<iostream>
using namespace std;
class greatest
{
public:
int x,y,z,r;

int  calculate()
{
r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
return r;
}
 };
int main ()
{
greatest obj;
cout<<"enter three no:-";
cin>>obj.x>>obj.y>>obj.z;
cout<<"greatest no is:-"<<obj.calculate();
}
