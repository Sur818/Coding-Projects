#include<iostream>
using namespace std;
class Animal
{
private:
void eat()
{
cout<<"animals are eat:-\n";
}
void sleep()
{
cout<<"animals are sleep-\n";
}
public:
void getsetter()
{
eat();
sleep();
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
obj.getsetter();
obj.bark();
}
    