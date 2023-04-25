#include<iostream>
using namespace std;

class students
{
public:
int age;
int roll_no;
string name;
};

students *getdetails (students *s,int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"ente age:-";
cin>>s[i].age;
cout<<"\n\n";
}
return s;
}

bool match_substring(string s2,string s1)
{
int i,j,count,flag=0;
for(i=0;i<s1.length();i++)
{
count=0;
for(j=i;j<s1.length();j++)
{
count++;
string s=s1.substr(i,count);
if(s.compare(s2)==0)
{
flag++;
return true;
break;
}
}
}
if(flag==0)
return false;
}


int search_maxsubstr(string s,string s1)
{
int i,j,k,count=0;
for(i=0;i<s.length();i++)
{
k=0;
for(j=i;j<s.length();j++)
{
k++;
string s2=s.substr(i,k);
if(match_substring(s2,s1))
{
count++;
}
}
}
return count;
}

void display(students *s ,int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll_no="<<s[i].roll_no<<endl;
cout<<"\n\n";
}
}

int main()
{
students *s=new students();
int n,i,ans,index,k=0;
string name,s1;
cout<<"enter no of students:-";
cin>>n;
getdetails(s,n);
while(k<n)
{
cout<<"enter name:-";
getline(cin,name);
ans=0;
for(i=0;i<n;i++)
{
int b=search_maxsubstr(s[i].name,name);
if(b>ans)
{
index=i;
}
ans=max(ans,b);
}
s[index].name=name;
k++;
}
cout<<"\n\n";
display(s,n);

}
