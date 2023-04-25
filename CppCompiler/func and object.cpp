#include<iostream>
using namespace std;
class student
{
  public:
double marks;
};

void avgmark(student s1, student s2)
{
double avg=(s1.marks+s2.marks)/2;
cout<<"avg of both marks="<<avg;
}

int main()
{
student s1,s2;
  s1.marks=10;
s2.marks=20;
avgmark(s1,s2);
}
