#include<iostream>
using namespace std;
class student
{
public:
int age;
int roll_no;
string name;
class subject
{
public:
int n;
string sub_name[10];
int marks[10];
};
subject s1;
};

student getdetils(student s)
{
int i;
cout<<"enter age:-";
cin>>s.age;
cout<<"enter name:-";
cin>>s.name;
cout<<"enter rollno:-";
cin>>s.roll_no;
cout<<"enter no of Subject:-";
cin>>s.s1.n;
for(i=0;i<s.s1.n;i++)
{
cout<<"enter subject name:-";
cin>>s.s1.sub_name[i];
cout<<"enter Mark's:-";
cin>>s.s1.marks[i];
}
return s;
}


int main()
{
student s;
int i,sum=0,per;
s=getdetils(s);
for(i=0;i<s.s1.n;i++)
{
sum=sum+s.s1.marks[i];
}
per=sum/s.s1.n;
if(per>33)
cout<<"pass";
else
cout<<"fail";
}



