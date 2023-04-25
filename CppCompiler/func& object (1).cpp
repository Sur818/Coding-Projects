#include<iostream>
using namespace std;

class students
{
public:
int roll_no;
int age;
string name;
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
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
}
return s;
}

void display(students s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll_no="<<s[i].roll_no;
cout<<"\n\n";
}
}

int main()
{
int n,no,i;
cout<<"enter no of students:-";
cin>>n;
students s[n],*p;
p=getdetails(s,n);
cout<<"which no students want to delete:-";
cin>>no;
for(i=no-1;i<n;i++)
{
p[i].name=p[i+1].name;
p[i].age=p[i+1].age;
p[i].roll_no=p[i+1].roll_no;
}
n--;
display(s,n);
}

