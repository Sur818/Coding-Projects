#include<iostream>
using namespace std;

class sumoftwono
{
public:
int a,b;
void sum(int x,int y)
{
cout<<"sum of both no:-"<<x+y;
}
};

int main()
{
sumoftwono obj;
cout<<"enter first no:-";
cin>>obj.a;
cout<<"enter second no:-";
cin>>obj.b;
obj.sum(obj.a,obj.b);
}

