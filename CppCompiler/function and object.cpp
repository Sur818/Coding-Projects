#include<iostream>
using namespace std;
class student
{
  public:
double marks;
student(double m)
{
marks=m;
}
};

void avgmark(student s1, student s2)
{
double avg=(s1.marks+s2.marks)/2;
cout<<"avg of both marks="<<avg;
}

int main()
{
student s1(10.3),s2(20.4);
avgmark(s1,s2);
}
