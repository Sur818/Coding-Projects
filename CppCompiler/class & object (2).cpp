#include<iostream>
using namespace std;

class students
{
public:
int age;
int roll_no;
string name;
int per;
int no;
class subject
{
public:
string sub_name;
int marks;
};
subject s1[10];
};
students *getdetails(students s[10],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"enter age:-";
cin>>s[i].age;
cout<<"no of subject:-";
cin>>s[i].no;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,s[i].s1[j].sub_name);
cout<<"enter marks=";
cin>>s[i].s1[j].marks;
}
cout<<"\n\n";
}
return s;
}



int main()
{
int n,i;
string name;
cout<<"enter no of students:-";
cin>>n;
students s[n],*p;
p=getdetails(s,n);
cout<<"enter name of students whose details you want:-";
getline(cin,name);
for(i=0;i<n;i++)
{
if((s[i].name).compare(name)==0)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no="<<s[i].roll_no<<endl;
cout<<"per="<<s[i].per;
}
}
return 0;
}

