#include<iostream>
using namespace std;


struct stu
{
int age;
int rollno;
string name;
};
struct stu *details(struct stu [],int );

string sir_name(string s)
{
int i,j;
string s1="";
s=s+'\0';
for(i=0;i<s.length();i++)
{
if(s[i+1]=='\0')
{
for(j=i;s[j]!=' ';j--)
{
s1=s1+s[j];
}
}
}
return s1;
}

int main()
{
struct stu s[100],*s1;
int i,n,j;
string s2,s3;
cout<<" emter no of students:-";
cin>>n;
s1=&s[0];
s1=details(s,n);
cout<<"details who's sir name are same:-\n\n";
for(i=0;i<n;i++)
{
s2=sir_name(s[i].name);
for(j=i+1;j<n;j++)
{
s3=sir_name(s[j].name);
if(s3.compare(s2)==0)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no"<<s[i].rollno;
cout<<"\n\n";
cout<<"name="<<s[j].name<<endl;
cout<<"age="<<s[j].age<<endl;
cout<<"roll no"<<s[j].rollno;
}
}
}
}

struct stu *details(struct stu s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-"; 
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].rollno;
cout<<"\n\n";
}
return s;
}

