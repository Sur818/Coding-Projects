#include<iostream>
using namespace std;

struct aktu
{
string college_name;
int code;
int no_ofbranch;
string b_name[20][10];
int no_students[100];
string stu_name[20][10][10];
string roll_no[10][10][10];
string adress[20][10][10];
string email_id[10][10][10];
string phone_no[10][10][10];
int pincode[10][10][10];
};

struct aktu *details (struct aktu [],int );

int main()
{
struct aktu s[10];
string s1;
int i,n,flag=0,j,k;
cout<<"enter no of college in aktu:-";
cin>>n;
details(s,n);
cout<<"\n\nenter student  roll no which details want to know:-";
cin>>s1;
for(i=0;i<n;i++)
{
for(j=0;j<s[i].no_ofbranch;j++)
{
for(k=0;k<s[i].no_students[j];k++)
{
string s2=s[i].roll_no[i][j][k];
if(s1.compare(s2)==0)
{
flag++;
cout<<"student name:-"<<s[i].stu_name[i][j][k];
cout<<"\nstudent email:-"<<s[i].email_id[i][j][k];
cout<<"\nstudent mob no:-"<<s[i].phone_no[i][j][k];
cout<<"\n student adress:-"<<s[i].adress[i][j][k];
cout<<"\n pincode:-"<<s[i].pincode[i][j][k];
}
}
}
}
if(flag==0)
{
cout<<"invalid roll no:-";
}
}


struct aktu *details (struct aktu s[],int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter college name:-";
getline(cin,s[i].college_name);
cout<<"enter college code:-";
cin>>s[i].code;
cout<<" enter no of branch:-";
cin>>s[i].no_ofbranch;
for(j=0;j<s[i].no_ofbranch;j++)
{
cin.ignore();
cout<<"enter branch name:-";
getline (cin,s[i].b_name[i][j]);
cout<<"enter no of students:-";
cin>>s[i].no_students[j];
for(k=0;k<s[i].no_students[j];k++)
{
cout<<"enter student name:-";
cin>>s[i].stu_name[i][j][k];
cout<<"enter student roll:-";
cin>>s[i].roll_no[i][j][k];
cin.ignore();
cout<<"enter student adress:-";
getline(cin,s[i].adress[i][j][k]);
cout<<"enter pincode:-";
cin>>s[i].pincode[i][j][k];
cin.ignore();
cout<<"enter phone no:-";
getline(cin,s[i].phone_no[i][j][k]);
cout<<"\n\n";
}
}
}
return s;
}












