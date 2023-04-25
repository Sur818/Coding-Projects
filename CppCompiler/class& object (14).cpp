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
class  subject
{
public:
string sub_name;
int marks;
};
subject s1[10];
};


students *getdetails(students s[10],int n)
{
int i,j,sum;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter rollno:-";
cin>>s[i].roll_no;
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter no of Subject:-";
cin>>s[i].no;
sum=0;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,s[i].s1[j].sub_name);
cout<<"enter this subject marks:-";
cin>>s[i].s1[j].marks;
sum=sum+s[i].s1[j].marks;
}
s[i].per=sum/(s[i].no);
cout<<"\n\n";
}
return s;
}

int max_per(students s[10],int n)
{
int i,max=s[0].per;
for(i=0;i<n;i++)
{
if(s[i].per>max)
max=s[i].per;
}
return max;
}


int main()
{
int n,i;
cout<<"no of students:-";
cin>>n;
students s[10],*p;
p=getdetails(s,n);
cout<<"details of topper is:-\n";
for(i=0;i<n;i++)
{
if(p[i].per==max_per(s,n))
{
cout<<"name="<<p[i].name<<endl;
cout<<"age="<<p[i].age<<endl;
cout<<"rollno="<<p[i].roll_no<<endl;
cout<<"percentage="<<p[i].per<<endl;
}
}
}

