#include<iostream>
using namespace std;

class addition
{
public:
int real,img;
void input(int x,int y)
{
real=x;
img=y;
}

addition operator -(addition obj)
{
addition temp;
temp.real=real-obj.real;
temp.img=img-obj.img;
return temp;
}

void display()
{
cout<<"sum of both complex no:-"<<real<<"-i"<<img<<endl;
}
};

int main()
{
addition obj1,obj2,obj3;
obj1.input(10,20);
obj2.input(10,20);
obj3=obj1-obj2;
obj3.display();
}
