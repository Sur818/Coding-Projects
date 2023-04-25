#include<iostream>
using namespace std;

class students
{
public:
int roll_no;
string name;
int age;
int no_sub;
int per;
students *getdetails(students s[],int n)
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
cin>>s[i].roll_no;
cout<<"enter no of Subject:-";
cin>>s[i].no_sub;
cout<<"\n\n";
}
return s;
}
};

class subjects
{
public:
string sub_name;
int marks;
subjects *getdetails(subjects sub[],int n)
{
students s[n];
int i,j,sum;
for(i=0;i<n;i++)
{
sum=0;
for(j=0;j<s[i].no_sub;j++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,sub[j]. sub_name);
cout<<"enter marks:-";
cin>>sub[j].marks;
sum=sum+sub[j].marks;
}
s[i].per=marks/(s[i].no_sub);
cout<<"\n\n";
}
return sub;
} 
};


int main()
{
int n,i,j;
cout<<"enter no of students:-";
cin>>n;
students s[n],*p1,obj;
p1=obj.getdetails(s,n);
subjects sub[100],obj1,*p2;
p2=obj1.getdetails(sub,n);
for(i=0;i<n;i++)
{
cout<<"name="<<p1[i].name<<endl;
cout<<"age="<<p1[i].age<<endl;
cout<<"roll no="<<p1[i].roll_no<<endl;
for(j=0;j<p1[i].no_sub;j++)
{
cout<<p2[j].sub_name<<"="<<p2[j].marks<<endl;
}
cout<<"percentage="<<p1[i].per<<endl;
}
}




    