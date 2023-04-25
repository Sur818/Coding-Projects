#include<iostream>
using namespace std;
class student
{
public:
int age;
string name;
int roll_no;
string adress;
student *getdetils(student s[10],int n)
{
for(int i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"roll no:-";
cin>>s[i].roll_no;
cin.ignore();
cout<<"enter adress:-";
getline(cin,s[i].adress);
}
return s;
}
};

void print(student *p,int n)
{
cout<<"name="<<p[n].name<<endl;
cout<<"age="<<p[n].age<<endl;
cout<<"adress="<<p[n].adress<<endl;
cout<<"roll no="<<p[n].roll_no<<endl;
cout<<"\n\n";
}

int main()
{
int n,i,k1,k2;
cout<<"enter no of students:-";
cin>>n;
student s[100],obj;
student *p;
p=obj.getdetils(s,n);
cout<<"enter age range to get information:-";
cin>>k1>>k2;
for(i=0;i<n;i++)
{
if(p[i].age>k1&&p[i].age<k2)
{
print(p,i);
}
}
return 0;
}

    