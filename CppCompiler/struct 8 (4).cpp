#include<iostream>
using namespace std;

struct stu
{
string name;
int age;
int roll_no;
string mob_no;
string email_id;
};

struct stu *details(struct stu s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline (cin,s[i].name);
cout<<"enter age";
cin>>s[i].age;
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
cin.ignore();
cout<<"mobile no:-";
getline(cin,s[i].mob_no);
cout<<"enter email id:-";
getline(cin,s[i].email_id);
}
return s;
}

int main()
{
int i,n,a,b;
struct stu s[10];
cout<<"enter no of students :-";
cin>>n;
details(s,n);
cout<<"enter age range for getinformation:-";
cin>>a>>b;
for(i=0;i<n;i++)
{
if(s[i].age>=a&&s[i].age<=b)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no="<<s[i].roll_no<<endl;
cout<<"mob_no="<<s[i].mob_no<<endl;
cout<<"email_id="<<s[i].email_id<<endl;
cout<<"\n\n";
}
}
return 0;
}


