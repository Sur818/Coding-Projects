#include<iostream>
using namespace std;

class students
{
public:
int age;
int roll_no;
string name;
string adress;
string stu_id;
void getdetails(students s[10],int n)
{
for(int i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cin.ignore();
cout<<"address=";
getline(cin,s[i].adress);
cout<<"enter student id:-";
getline(cin,s[i].stu_id);
}
}
};



void print(students s[10],int n)
{
cout<<"name="<<s[n].name<<endl;
cout<<"roll no="<<s[n].roll_no<<endl;
cout<<"adress="<<s[n].adress<<endl;
cout<<"age="<<s[n].age<<endl;
}


int main()
{
int n,i;
string s1;
cout<<"enter no students :-";
cin>>n;
students s[10],obj;
obj.getdetails(s,n);
cout<<"enter student id to get information:-";
getline(cin,s1);
for(i=0;i<n;i++)
{
if(s1.compare(s[i].stu_id)==0)
{
print(s,i);
}
}
return 0;
}





