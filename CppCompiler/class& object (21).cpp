#include<iostream>
using namespace std;

class employee
{
public:
int age;
float salery;
string name;
string id;
employee *getdetails1(employee e[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,e[i].name);
cout<<"enter age:-";
cin>>e[i].age;
cout<<"enter salery:-";
cin>>e[i].salery;
cin.ignore();
cout<<"enter id:-";
getline(cin,e[i].id);
}
return e;
}
};
class students
{
public:
int age;
int roll_no;
string name;
students *getdetails2(students s[],int m)
{
int i;
for(i=0;i<m;i++)
{
cin.ignore();
cout<<"enter student name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
cout<<"\n\n";
}
return s;
}
};

int main()
{
int n,m,i,j;
cout<<"enter no of students:-";
cin>>m;
students s[m],*s1,obj2;
s1=obj2.getdetails2(s,m);
cout<<"enter no of employees:-";
cin>>n;
employee e[n],*e1,obj1;
e1=obj1.getdetails1(e,n);
cout<<"\nprint details of persons whose are employee and Also students:-\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(((e1[i].name).compare(s1[j].name)==0)&&(e1[i].age==s1[i].age))
{
cout<<"name="<<e1[i].name<<endl;
cout<<"age="<<e1[i].age<<endl;
cout<<"\n\n";
}
}
}
return 0;
}







