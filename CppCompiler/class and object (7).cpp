#include<iostream>
using namespace std;

class student
{
public:
int age,roll_no;
string name;
string id;
};

student details (student s)
{
cout<<"enter name:-";
getline(cin,s.name);
cout<<"enter age:-";
cin>>s.age;
cin.ignore();
cout<<"enter id:-";
getline(cin,s.id);
cout<<"enter rollno:-";
cin>>s.roll_no;
return s;
}
int main()
{
student s,s1;
s1=details(s);
cout<<"student name:-"<<s1.name;
}

