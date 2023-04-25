#include<iostream>
using namespace std;
class Animal
{
public:
void eat()
{
cout<<"animals are eat:-\n";
}
void sleep()
{
cout<<"animals are sleep-\n";
}
};

class dog:public Animal
{
public:
void bark()
{
cout<<"dogs are bark:-\n";
}
};

int main()
{
dog obj;
obj.eat();
obj.sleep();
obj.bark();
}
