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

struct employe
{
int age;
string name;
float salery;
string comp_name;
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
getline(cin,s[i].name);
cout<<"enter mobile no:-";
cin>>s[i].mob_no;
cin.ignore();
cout<<"enter id:-";
getline(cin,s[i].id);
cout<<"enter adress:-";
getline(cin,s[i].adress);
}
cout<<"\n\n";
return s;
}


struct employe *getdata(struct employe a[10],int m)
{
int i;
for(i=0;i<m;i++)
{
cin.ignore();
cout<<"enter employee name:-";
getline(cin,a[i].name);
cout<<"enter employee age:-";
cin>>a[i].age;
cout<<"enter employee  salary:-";
cin>>a[i].salery;
cin.ignore();
cout<<"enter employee company name:-";
getline(cin,a[i].comp_name);
}
return a;
}

void check_common(struct stu s[],struct employe a[],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if((s[i].name).compare(a[i].name)==0);
{
cout<<s[i].name<<endl;
}
}
}
}
int main()
{
 int i,n,m;
struct stu s[10];
struct employe a[10];
cout<<"enter no of students:-";
cin>>n;
details(s,n);
cout<<"enter no of employees:-";
cin>>m;
getdata(a,m);
cout<<"enter person name who's are students as well as employees also:-\n";
check_common(s,a,n,m);
}







