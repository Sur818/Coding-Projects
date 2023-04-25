#include<iostream>
using namespace std;

struct man
{
int id;
string name;
int salery;
int age;
};


struct man *details(struct man s[5],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"enter emp id:-";
cin>>s[i].id;
cin.ignore();
cout<<"enter emp name:-";
getline(cin,s[i].name);
cout<<"enter salery:-";
cin>>s[i].salery;
cout<<"enter age:-";
cin>>s[i].age;
cout<<"\n";
}
return s;
}


int main()
{
int i,n,j,*arr;
cout<<"enter no of employees:-";
cin>>n;
cout<<"\n\n";
struct man s[10];
details(s,n);
for(i=0;i<n;i++)
{
arr[i]=s[i].salery;
}
int m=*max_element(arr,arr+n);
for(i=0;i<n;i++)
{
if(s[i].salery==m)
{
cout<<"highest paid person:-"<<s[i].name<<endl;
}
}
cout<<"\n\nemployees name according to his salery:-";
for(i=0;i<n;i++)
{
 m=*max_element(arr+i,arr+n);
for(j=0;j<n;j++)
{
if(s[j].salery==m)
{
cout<<s[j].name<<"\n";
}
}
}
}




    