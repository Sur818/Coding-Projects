#include<iostream>
using namespace std;
  class sample
{
  public:
sample()
{
cout<<"hello word"<<endl;
}

sample(sample &obj)
{
cout<<"this is Suraj singh"<<endl;
}

};


int main()
{
sample obj;
sample obj1(obj);
}