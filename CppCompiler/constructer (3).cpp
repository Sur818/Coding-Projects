#include<iostream>
using namespace std;

class Area
{
public:
int length,width;
Area(int x,int y)
{
length=x;
width=y;
}
void Areaofrectangle()
{
cout<<"area of rectangle="<<length*width<<endl;
}
};


int main()
{
int x,y;
cout<<"enter length:-";
cin>>x;
cout<<"enter width:-";
cin>>y;
Area obj(x,y);
obj.Areaofrectangle();
}
