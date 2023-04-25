#include<iostream>
using namespace std;

class class_name
{
public:
int a,b;
string name;
};

void abc(class_name s)
{
cout<<s.name<<endl;
cout<<s.a+s.b;
}

int main()
{
class_name obj;
obj.name="Suraj";
obj.a=10;
obj.b=10;
abc(obj);
}
