#include<iostream>
using namespace std;

class number
{
public:
int a;
number(int x)
{
a=x;
}
number(number &obj)
{
cout<<"copy costructer called!"<<endl;
a=obj.a;
}
void display()
{
cout<<"value of a="<<a<<endl;
}
};

int main()
{
int n;
cout<<"enter no :-";
cin>>n;
number obj(n);
obj.display();
number obj2=obj;
obj2.display();
}
