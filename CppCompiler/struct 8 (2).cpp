#include<iostream>
using namespace std;
struct stu
{
string roll_no;
string stu_name;
int age;
int no_sub;
string sub_name[10][10];
int marks[10][10];
int per;
};

struct branch
{
string b_name;
string hod;
int no_st;
struct stu s[100];
};


struct college
{
int code;
string name;
int no;
struct  branch b[5];
};

struct college details(struct college );
int main()
{
int i,j,k;
string s1;
struct college c;
c=details(c);
cout<<"enter roll no of students which information you want:-";
cin>>s1;
for(i=0;i<c.no;i++)
{
for(j=0;j<c.b[i].no_st;j++)
{
if(s1.compare(c.b[i].s[j].roll_no)==0)
{
cout<<"branch="<<c.b[i].b_name<<endl;
cout<<"student name:-"<<c.b[i].s[j].stu_name<<endl;
cout<<"age="<<c.b[i].s[j].age<<endl;
for(k=0;k<c.b[i].s[j].no_sub;k++)
{
cin.ignore();
cout<<"\nsubject name="<<c.b[i].s[j].sub_name[j][k];
cout<<"\n "<< c.b[i].s[j].sub_name[j][k]<<"marks="<<c.b[i].s[j].marks[j][k];
}
cout<<"\npercentage="<<c.b[i].s[j].per;
break;
}
}
}
}


struct college details(struct college c )
{
int i,j,k,sum=0;
cout<<"enter college name:-";
getline(cin,c.name);
cout<<"enter college code:-";
cin>>c.code;
cout<<"enter no of branch present in college:-";
cin>>c.no;
for(i=0;i<c.no;i++)
{
cin.ignore();
cout<<"enter branch name:-";
getline(cin,c.b[i].b_name);
cout<<"enter hod name:-";
getline(cin,c.b[i].b_name);
cout<<"no of students in branch:-";
cin>>c.b[i].no_st;
for(j=0;j<c.b[i].no_st;j++)
{
cin.ignore();
cout<<"enter roll no:-";
getline(cin,c.b[i].s[j].roll_no);
cout<<"enter student name:-";
getline(cin,c.b[i].s[j].stu_name);
cout<<"enter age:-";
cin>>c.b[i].s[j].age;
cout<<"enter no of Subject:-";
cin>>c.b[i].s[j].no_sub;
for(k=0;k<c.b[i].s[j].no_sub;k++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,c.b[i].s[j].sub_name[j][k]);
cout<<"enter sub marks:-";
cin>>c.b[i].s[j].marks[j][k];
sum=sum+c.b[i].s[j].marks[j][k];
}
c.b[i].s[j].per=sum/(c.b[i].s[j].no_sub);
sum=0;
}
cout<<"\n";
}
return c;
}







    