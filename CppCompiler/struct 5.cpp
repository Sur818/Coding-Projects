#include<iostream>
using namespace std;

  struct stu
{
int rollno;
int age;
string name;
};

struct stu *details(struct stu s[10],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter rollno";
cin>>s[i].rollno;
cin.ignore();
cout<<"\n\n";
}
return s;
}
int main()
{
string s1;
int n;
cout<<"how many students:-";
cin>>n;
cin.ignore();
struct stu s[n];
  details(s,n);
cout<<"enter name which details you want:-";
getline(cin,s1);
for(int i=0;i<n;i++)
{
if(s1.compare(s[i].name)==0)
{
cout<<"details are:--\n";
cout<<"name="<<s[i].name<<"\n";
cout<<"age="<<s[i].age<<endl;
cout<<"rollno="<<s[i].rollno;
}
}
return 0;
}
  