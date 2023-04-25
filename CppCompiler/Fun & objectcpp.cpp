#include<iostream>
using namespace std;

class students
{
public:
int age;
int roll_no;
string name;
};

students *getdetails(students s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter Students name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
cout<<"\n\n";
}
return s;
}

void display(students s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no="<<s[i].roll_no<<endl;
cout<<"\n\n";
}
}

int main()
{
int n,i,ind,q;
cout<<"enter no of students:-";
cin>>n;
students s[n],m,*p;
string s1;
p=getdetails(s,n);
cin.ignore();
cout<<"which students information want to displace:-";
getline(cin,s1);
cout<<"which location:-";
cin>>q;
for(i=0;i<n;i++)
{
if((p[i].name).compare(s1)==0)
{
ind=i;
m.name=p[i].name;
m.age=p[i].age;
m.roll_no=p[i].roll_no;
break;
}
}
if(ind<q-1)
{
for(i=ind;i<q-1;i++)
{
p[i]=p[i+1];
}
}
else
{
for(i=ind;i>q-1;i--)
{
p[i]=p[i-1];
}
}
p[q-1].name=m.name;
p[q-1].age=m.age;
p[q-1].roll_no=m.roll_no;
display(p,n);
}

