#include<iostream>
using namespace std;

struct stu
{
int id;
string name;
int age;
};
void print(struct stu xyz)
{
cout<<xyz.id<<"\n";
cout<<xyz.name<<"\n";
cout<<xyz.age<<"\n";
}
int main()
{
struct stu s1;
cout<<"enter roll no:-";
cin>>s1.id;
cin.ignore();
cout<<"enter name:-";
getline(cin,s1.name);
cout<<"enter age:-";
cin>>s1.age;
print(s1);
}