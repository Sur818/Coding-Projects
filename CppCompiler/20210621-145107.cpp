#include<iostream>
using namespace std;
bool string_endwith(string, char );

struct stu
{
int age;
string id;
string name;
string adress;
string mob_no;
};



struct stu *details(struct stu s[10],int n)
{
int i;
for(i=0;i<n;i++)
{ 
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter name:-";
getline( cin,s[i].name);
cout<<"enter mobile no:-";
cin>>s[i].mob_no;
cin.ignore();
cout<<"enter id:-";
getline(cin,s[i].id);
cout<<"enter adress:-";
getline(cin,s[i].adress);
}
return s;
}

int main()
{
 int i,n;
string m;
struct stu s[10];
cout<<"enter no of students:-";
cin>>n;
details(s,n);
cout<<"\n\nenter mobile no for checking details-";
cin>>m;
for(i=0;i<n;i++)
{
if(s[i].mob_no.compare(m)==0)
{
cout<<"name="<<s[i].name<<endl;
}
}
}







