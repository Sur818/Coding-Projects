#include<iostream>
using namespace std;

class student
{
public:
int rollno,age,id;
string name;
public:
void information()
{
cout<<"roll no:-"<<rollno<<endl;
cout<<"age:-"<<age<<endl;
cout<<"id:-"<<id<<endl;
cout<<"name:-"<<name;
} 

};
int main ()
{
int i,j,sid,n;
student s[10];
cout<<"how many students are present :-";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter roll no:-";
cin>>s[i].rollno;
cout<<"enter student id:-";
cin>>s[i].id;
cout<<"\n\n";
}
cout<<"enter studentid to know student information:-";
cin>>sid;
for(i=0;i<n;i++)
{
if(sid==s[i].id)
{
s[i].information();
}
}
}


