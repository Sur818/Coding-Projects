#include<iostream>
using namespace std;

struct stu
{
    int roll_no;
    int age;
    int id;
    char name[10];
};

void print(struct stu s)
{
    cout<<"name:-"<<s.name<<endl;
    cout<<"age:-"<<s.age<<endl;
    cout<<"roll_no:-"<<s.roll_no<<endl;
    cout<<"id:-"<<s.id;
}

int main()
{
    struct  stu s ;
    cout<<"enter roll no:-";
    cin>>s.roll_no;
    cout<<"enter age:-";
    cin>>s.age;
    cout<<"enter id:-";
    cin>>s.id;
    cin.ignore();
    cout<<"enter string:-";
     gets(s.name);
    cout<<"entered details are:-\n\n";
    print(s);
}
