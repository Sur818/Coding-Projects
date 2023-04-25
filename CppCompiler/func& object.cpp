#include<iostream>
using namespace std;

class students
{
public:
string name;
int age;
int roll_no;
};

students *getdetails(students s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"\n\n";
}
return s;
}

void display(students s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no="<<s[i].roll_no<<endl;
}
}
int main()
{
int n;
cout<<"enter no of students:-";
cin>>n;
students s[n],*p;
p=getdetails(s,n);
display(p,n);
}