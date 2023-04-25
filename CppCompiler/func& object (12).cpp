#include<iostream>
using namespace std;
class students
{
public:
int roll_no;
int age;
string name;
string dob;
int no;
int per;
class subjects
{
public:
string sub_name;
int sub_marks;
};
subjects sub[100];
};
void print(students *,int );

students *getdetails(students *s,int n)
{
int i,j,sum;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name of students:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"enter date of birth:-";
cin>>s[i].dob;
cout<<"enter no of Subjects:-";
cin>>s[i].no;
sum=0;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,s[i].sub[j].sub_name);
cout<<"enter marks:-";
cin>>s[i].sub[j].sub_marks;
sum=sum+s[i].sub[j].sub_marks;
}
s[i].per=sum/(s[i].no);
cout<<"\n\n";
}
return s;
}

string age_year(string s)
{
int i,count=0;
string s1;
reverse(s.begin(),s.end());
for(i=0;i<s.length();i++)
{
count++;
if(s[i]=='-'||'/'||' ')
{
s1=s.substr(0,count-1);
reverse(s1.begin(),s1.end());
return s1;
break;
}
}
}

int main()
{
string s1,s2;
cout<<"in this program you find the details of those students who's birth year are same:-\n";
int i,j,n,flag=0;
cout<<"enter no of students:-";
cin>>n;
students *s=new students();
s=getdetails(s,n);
for(i=0;i<n;i++)
{
flag=0;
s1=age_year(s[i].dob);
for(j=i+1;j<n;j++)
{
s2=age_year(s[j].dob);
if(s1.compare(s2)==0)
{
flag++;
print(s,j);
cout<<"\n\n";
}
if(flag!=0)
print(s,i);
}
}
}

void print(students *s,int i)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"date of birth="<<s[i].dob<<endl;
cout<<"per="<<s[i].per<<endl;
if(s[i].per>=33)
{
cout<<"pass"<<endl;
}
}





