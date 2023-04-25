#include<iostream>
using namespace std;

struct employe
{
int salery;
int id;
int age;
string name;
};

void display(struct employe e)
{
 cout<<"name="<<e.name<<endl;
cout<<"age="<<e.age<<endl;
cout<<"salery="<<e.salery;
}

void details(struct employe e)
{
cout<<"enter age:-";
cin>>e.age;
cout<<"enter salery:-";
cin>>e.salery;
cin.ignore();
cout<<"enter name";
getline(cin,e.name);
display(e);
}





int main()
{
struct employe e;
details(e);
return 0;
}

    