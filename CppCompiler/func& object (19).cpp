#include<iostream>
using namespace std;

class students
{
public:
int age;
string name;
int roll_no;
int no; 
int per;
class subjects
{
public:
string sub_name;
int int_marks;
int ext_marks;
};
subjects *s1=new subjects();
};

students *stu(students *s,int n)
{
int i,j,sum;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"enter no of Subject:-";
cin>>s[i].no;
sum=0;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"subject name:-";
getline(cin,s[i].s1[j].sub_name);
cout<<"enter internal marks:-";
cin>>s[i].s1[j].int_marks;
cout<<"enter external marks:-";
cin>>s[i].s1[j].ext_marks;
sum=sum+s[i].s1[j].int_marks+s[i].s1[j].ext_marks;
}
s[i].per=sum/(s[i].no);
cout<<"\n\n";
}
return s;
}


int main()
{
int n,i,j;
string s2;
cout<<"enter no of students:-";
cin>>n;
students *s;
s=new students[n];
s=stu(s,n);
cin.ignore();
cout<<"enter  name of student to get acedmicdetails:-";
getline(cin,s2);
for(i=0;i<n;i++)
{
if(s[i].name.compare(s2)==0)
{
cout<<"subname"<<"  "<<"internal"<<"  "<<"external";
cout<<"  "<<"total"<<endl;
for(j=0;j<s[i].no;j++)
{
cout<<s[i].s1[j].sub_name<<"       "<<s[i].s1[j].int_marks<<"       "<<s[i].s1[j].ext_marks;
cout<<"       "<<s[i].s1[j].int_marks+s[i].s1[j].ext_marks<<endl;
}
}
}
return 0;
}









