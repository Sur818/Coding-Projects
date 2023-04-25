#include<iostream>
using namespace std;

class xyz
{
public:
int a,b;
xyz(int a,int b)
{
this->a=a;
this->b=b;
}
void sum()
{
cout<<"sum of both no="<<a+b<<endl;
}
void multiply()
{
cout<<"product of both no="<<a*b;
}
};
int main()
{
int x,y;
cout<<"enter two no:-";
cin>>x>>y;
xyz obj(x,y);
obj.sum();
obj.multiply();
}

