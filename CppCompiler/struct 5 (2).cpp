#include<iostream>
using namespace std;

struct stu
{
int age;
int roll_no;
string name;
};
struct stu *details(struct stu s[], int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll_no";
cin>>s[i].roll_no;
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"\n";
}
return s;
}

int main()
{
int i,n,m;
cout<<"enter no of students:-";
cin>>n;
struct stu s[5];
struct stu *s1;
s1=details(s,n);
cout<<"which age profile you search:-";
cin>>m;
for(i=0;i<n;i++)
{
if(s1[i].age==m)
{
cout<<"age="<<s1[i].age<<endl;
cout<<"name="<<s1[i].name<<endl;
cout<<"roll_no="<<s1[i].roll_no<<endl;
}
}
return 0;
}



