#include<iostream>
using namespace std;
class greatest
{
public:
int x,y,z,r;

int  calculate()
{
if(x>y&&x>z)
return x;
else if(y>x&&y>z)
return y;
else if(z>x&&z>y)
return z;
}
};

int main ()
{
greatest obj;
cout<<"enter three no:-";
cin>>obj.x>>obj.y>>obj.z;
cout<<"greatest no is:-"<<obj.calculate();
}
