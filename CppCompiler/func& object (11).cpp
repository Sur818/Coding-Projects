#include<iostream>
using namespace std;

class students
{
public:
string  stu_name;
int age;
int roll_no;
};
students *stu(students s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].stu_name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"\n\n";
}
return s;
}


class employee
{
public:
string emp_name;
int age;
int id;
};
string sir_name(string s)
{
int i,count=0;
string s1;
reverse(s.begin(),s.end());
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(0,count-1);
reverse(s1.begin(),s1.end());
return s1;
break;
}
}
}

employee *emp(employee e[],int m)
{
int i;
for(i=0;i<m;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,e[i].emp_name);
cout<<"enter age:-";
cin>>e[i].age;
cout<<"enter id:-";
cin>>e[i].id;
cout<<"\n\n";
}
return e;
}
bool no_match(string s1,string s)
{
string s2;
int i,count=0,flag=0,k=0;
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s2=s.substr(k,count-1);
k=i+1;
count=0;
if(s1.compare(s2)==0)
{
flag++;
return false;
break;
}
}
}
if(flag==0)
return true;
}

void print1(students *p1,int i)
{
cout<<"name="<<p1[i].stu_name<<endl;
cout<<"age="<<p1[i].age<<endl;
cout<<"roll no:-"<<p1[i].roll_no<<endl;
}

void print2(employee *p2,int j)
{
cout<<"name="<<p2[j].emp_name<<endl;
cout<<"age="<<p2[j].age<<endl;
cout<<"id="<<p2[j].id<<endl;
}
int main()
{
string s1,s2,s3;
int i,j,n,m,flag1=0,flag2=0;
cout<<"enter no of students:-";
cin>>n;
students s[n],*p1;
p1=stu(s,n);
cout<<"enter no of employees:-";
cin>>m;
employee e[m],*p2;
p2=emp(e,m);
for(i=0;i<n;i++)
{
flag1=0;
flag2=0;
s1=sir_name(p1[i].stu_name);
if(no_match(s1,s3))
{
flag2++;
for(j=0;j<m;j++)
{
s2=sir_name(p2[j].emp_name);
if(s1.compare(s2)==0)
{
flag1++;
print2(p2,j);
} 
}
}
if(flag1!=0||flag2==0)
{
print1(p1,i);
}
s3=s3+s1+" ";

}
}

