#include<iostream>
using namespace std;

class student
{
public:
int age,rollno;
string name,id;
};

student setdata()
{
student s;
cout<<"enter name:-";
getline(cin,s.name);
cout<<"enter age:-";
cin>>s.age;
cout<<"enter rollno:-";
cin>>s.rollno;
cin.ignore();
cout<<"enter id:-";
getline(cin,s.id);
return s;
}

void getdata(student s)
{
cout<<"name of students:-"<<s.name<<endl;
cout<<"age:-"<<s.age<<endl;
cout<<"roll no:-"<<s.rollno<<endl;
cout<<"id:-"<<s.id;
}


int main()
{
student s;
s=setdata();
getdata(s);
}






    