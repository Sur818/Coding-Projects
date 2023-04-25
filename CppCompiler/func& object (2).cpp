#include<iostream>
using namespace std;

class students
{
public:
int roll_no;
int age;
string name;
int per;
int no_sub;
class subjects
{
public:
string sub_name;
int marks;
};
subjects s1[10];
};

students *getdetails(students s[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
cout<<"no of Subjects:-";
cin>>s[i].no_sub;
int sum=0;
for(j=0;j<s[i].no_sub;j++)
{
cin.ignore();
cout<<"enter sub_name:-";
getline(cin,s[i].s1[j].sub_name);
cout<<"enter this subject marks:-";
cin>>s[i].s1[j].marks;
sum=sum+s[i].s1[j].marks;
}
s[i].per=sum/(s[i].no_sub);
cout<<"\n\n";
}


return s;
}

void display(students s[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll_no="<<s[i].roll_no;
cout<<"\n\n";
for(j=0;j<s[i].no_sub;j++)
{
cout<<s[i].s1[j].sub_name<<"="<<s[i].s1[j].marks<<endl;
}
cout<<s[i].per<<endl;
}
}

int main()
{
int n,no,i,j;
cout<<"enter no of students:-";
cin>>n;
students s[n],*p;
p=getdetails(s,n);
cout<<"which no students want to delete:-";
cin>>no;
for(i=no-1;i<n;i++)
{
p[i].name=p[i+1].name;
p[i].age=p[i+1].age;
p[i].roll_no=p[i+1].roll_no;
for(j=i;j<p[i].no_sub;j++)
{
p[i].s1[j].sub_name=p[i].s1[j+1].sub_name;
p[i].s1[j].marks=p[i].s1[j+1].marks;
} 
p[i].no_sub=p[i+1].no_sub;
p[i].per=p[i+1].per;
}
n--;
display(s,n);
}

    