#include<iostream>
using namespace std;

class sumoftwono
{
private:
int a,b;
public:
void sum(int x,int y)
{
cout<<"sum of both no:-"<<x+y;
}
public:
void setter(int x,int y)
{
a=x;
b=y;
}
};

int main()
{
int a,b;
sumoftwono obj;
cout<<"enter first no:-";
cin>>a;
cout<<"enter second no:-";
cin>>b;
obj.sum(a,b);
}

