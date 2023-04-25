#include<iostream>
using namespace std;


struct stu
{
int id;
int age;
char name[20];
};

struct stu *abd(struct stu s[5])
{
int i;
for(i=0;i<5;i++)
{
cout<<"enter name:-";
gets(s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter id:-";
cin>>s[i].id;
cin.ignore();
cout<<"\n\n";
}
return s;
}

int main()
{
struct stu s[5];
struct stu *ptr;
ptr=abd(s);
cout<<ptr[0].name;
}
