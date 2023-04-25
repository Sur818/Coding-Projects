#include<iostream>
using namespace std;

class abg
{
public:
int a,b;
void swap()
{
int temp;
temp=a;
a=b;
b=temp;
}
};

void display()
{
abg s;
s.a=10;
s.b=20;
s.swap();
cout<<"a="<<s.a<<endl;
cout<<"b="<<s.b<<endl;
}

int main ()
{
display();
}

 