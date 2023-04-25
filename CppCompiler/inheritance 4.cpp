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

class dog: public Animal
{
private:
void bark()
{
cout<<"dogs are bark:-\n";
}
public:
void getsetter_a()
{
bark();
}
};

int main()
{
dog obj;
obj.getsetter();
obj.getsetter_a();
}
    