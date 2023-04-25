#include<iostream>
using namespace std;

class college
{
public:
string college_name;
int no;
string d_name;
class branch
{
public:
string b_name;
string h_name;
int no_students;
class students
{
public:
int roll_no;
int age;
string name;
int no_sub;
int per;
string sub_name[10];
int marks[10];
};
students s2[100];
};
branch s1[10];
college *getdetails(college s[10],int n)
{
int i,j,k,t,sum=0;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter college name:-";
getline(cin,s[i].college_name);
cout<<"enter direcctor name-";
getline(cin,s[i].d_name);
cout<<"enter no of branches in this collegees:-";
cin>>s[i].no;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"enter branch name:-";
getline(cin,s[i].s1[j].b_name);
cout<<"enter hod name of above branch:-";
getline(cin,s[i].s1[j].h_name);
cout<<"enter no of students in this branch:-";
cin>>s[i].s1[j].no_students;
for(k=0;k<s[i].s1[j].no_students;k++)
{
cin.ignore();
cout<<"enter roll no:-";
cin>>s[i].s1[j].s2[k].roll_no;
cout<<"enter age:-";
cin>>s[i].s1[j].s2[k].age;
cin.ignore();
cout<<"enter student name:-";
getline(cin,s[i].s1[j].s2[k].name);
cout<<"enter no of Subject:-";
cin>>s[i].s1[j].s2[k].no_sub;
sum=0;
for(t=0;t<s[i].s1[j].s2[k].no_sub;t++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,s[i].s1[j].s2[k].sub_name[t]);
cout<<"enter this submarks:-";
cin>>s[i].s1[j].s2[k].marks[t];
sum=sum+s[i].s1[j].s2[k].marks[t];
}
s[i].s1[j].s2[k].per=sum/(s[i].s1[j].s2[k].no_sub);
}
}
}
return s;
}
};


void display(college s[10],int r,int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
for(j=0;j<s[i].no;j++)
{
for(k=0;k<s[i].s1[j].no_students;k++)
{
if(s[i].s1[j].s2[k].roll_no==r)
{
cout<<"name="<<s[i].s1[j].s2[k].name<<endl;
cout<<"age="<<s[i].s1[j].s2[k].age<<endl;
cout<<"roll no:-"<<s[i].s1[j].s2[k].roll_no<<endl;
cout<<"per:-"<<s[i].s1[j].s2[k].per<<endl;
}
}
}
}
}





int main()
{
int n,r;
college s[10],*p,obj;
cout<<"enter no of college:-";
cin>>n;
p=obj.getdetails(s,n);
cout<<"enter roll no to get student information:-";
cin>>r;
display(s,r,n);
}



    