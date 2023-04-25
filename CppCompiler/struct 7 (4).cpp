#include<iostream>
using namespace std;

struct emp
{
int age;
float salery;
string name;
};
struct emp *employe(struct emp e[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"enter age of employe:-";
cin>>e[i].age;
cout<<"enter salery:-";
cin>>e[i].salery;
cin.ignore();
cout<<"enter name:-";
getline(cin,e[i].name);
}
return e;
}
int main()
{
int i,n,j;
struct emp e[100];
cout<<"enter no of employe:-";
cin>>n;
employe(e,n);
cout<<"details of employees which are common name:-\n\n";
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(e[i].name.compare(e[j].name)==0)
{
cout<<"name="<<e[i].name<<"\n";
cout<<"age="<<e[i].age<<endl;
cout<<"salery="<<e[i].salery<<endl;

cout<<"\n";
cout<<"name="<<e[j].name<<"\n";
cout<<"age="<<e[j].age<<endl;
cout<<"salery="<<e[j].salery<<endl;
}
}
}
return 0;
}