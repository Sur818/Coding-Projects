#include<iostream>
using namespace std;

struct stu
{
int id;
string name;
int age;
};

struct stu setdata()
{
struct stu s1;
cout<<"enter name:-";
getline(cin,s1.name);
cout<<"enter student ID:-";
cin>>s1.id;
cout<<"enter age:-";
cin>>s1.age;
return s1;
}


void print(struct stu xyz)
{
cout<<xyz.id<<"\n";
cout<<xyz.name<<"\n";
cout<<xyz.age<<"\n";
}
int main()
{
struct stu *s1;
s1=setdata();
print(s1);
}