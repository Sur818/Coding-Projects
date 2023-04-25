#include<iostream>
using namespace std;

class xyz
{
public:
int a,b;
xyz(int x,int y)
{
a=x;
b=y;
cout<<"parameterized constructer called!"<<endl;
}

xyz(xyz &obj)
{
cout<<"copy constructer called!"<<endl;
a=obj.a;
b=obj.b;
}
void display()
{
cout<<"product is :-"<<a*b<<endl;
}
};

int main()
{
int a,b;
cout<<"enter two no :-";
cin>>a>>b;
xyz obj(a,b);
obj.display();
xyz obj2(obj);
obj2.display();
}
