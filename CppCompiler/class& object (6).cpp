#include<iostream>
using namespace std;

class students
{
private:
string name;
int roll_no;
int age;
public:
int n;
students *setter(students s[10])
{
for(int i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter roll_no";
cin>>s[i].roll_no;
cout<<"enter age:-";
cin>>s[i].age;
}
return s;
}
public:
void display(students s[10], string s1)
{
for(int i=0;i<n;i++)
{
if((s[i].name).compare(s1)==0)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no="<<s[i].roll_no<<endl;
}
}
}

};

int main()
{
string name;
students obj;
students obj1[10];
cout<<"enter no of students:-";
cin>>obj.n;
obj.setter(obj1);
cout<<"enter name of students to want details you want:-";
cin>>name;
obj.display(obj1,name);
} 



    