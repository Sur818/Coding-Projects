#include<iostream>
using namespace std;

class swapofno
{
public:
int a,b;
void  swap()
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"a="<<b<<endl;
cout<<"b="<<a<<endl;
}
};

int main()
{
swapofno obj;
cout<<"enter a=";
cin>>obj.a;
cout<<"enter b=";
cin>>obj.b;
cout<<"after swaping:-\n";
obj.swap();
return 0;
}
    