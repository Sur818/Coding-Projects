#include<iostream>
using namespace std;

struct home
{
int no;
string name;
int age;
};

int main()
{
int i;
string s;
struct home *p;

cout<<" no of students:-";
cin>>p->no;
for(i=0;i<p->no;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,(p+i)->name);
cout<<"enter age:-";
cin>>(p+i)->age;
}
cout<<"enter student name which details you want:-";
getline(cin,s);
for(i=0;i<p->no;i++)
{
if(s.compare((p+i)->name)==0)
{
cout<<"name="<<(p+i)->name<<endl;
cout<<"age="<<(p+i)->age<<endl;
}
}
return 0;
}
