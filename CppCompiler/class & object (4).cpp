#include<iostream>
using namespace std;
class student
{
public:
int age;
int roll_no;
string name;
student getdetails(student s)
{
cout<<"enter name:-";
getline(cin,s.name);
cout<<"enter age:-";
cin>>s.age;
cout<<"enter roll no:-";
cin>>s.roll_no;
return s;
}
};

void print(student s)
{
cout<<"name="<<s.name<<endl;
cout<<"age="<<s.age<<endl;
cout<<"roll no:-"<<s.roll_no<<endl;
}

int main()
{
string s1;
student s,obj;
s=obj.getdetails(s);
cout<<"enter name for correction:-";
getline(cin,s1);
if((s.name).compare(s1)!=0)
{
s.name=s1;
}
print(s);
}


