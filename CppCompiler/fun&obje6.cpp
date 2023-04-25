#include<iostream>
using namespace std;

class students
{
public:
string name;
int age;
int roll_no;
};


void display(students *p)
{
cout<<"name="<<p->name<<endl;
cout<<"age="<<p->age<<endl;
cout<<"roll no ="<<p->roll_no<<endl;
}


int main()
{
students *s;
s=(students *)malloc(sizeof(students));
cout<<"enter name:-";
getline(cin,s->name);
cout<<"enter age:-";
cin>>s->age;
cout<<"enter roll no:-";
cin>>s->roll_no;
display(s);
}