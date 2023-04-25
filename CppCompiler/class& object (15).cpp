#include<iostream>
using namespace std;

class student
{
public:
int age;
int roll_no;
string name;
int no;
int per;
class subject
{
public:
string sub_name;
int marks;
};
subject s1[10];
student *getdetails(student s[10],int n)
{
int i,j,sum=0;
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
cout<<"enter subject name:-";
getline(cin,s[i].s1[j].sub_name);
cout<<"enter marks:-";
cin>>s[i].s1[j].marks;
sum=sum+s[i].s1[j].marks;
}
s[i].per=sum/(s[i].no);
cout<<"\n\n";
}
return s;
}
};

bool match_substr(string s1, string s)
{
int i,j,count,flag=0;
for(i=0;i<s.length();i++)
{
count=0;
for(j=i+1;j<s.length();j++)
{
count++;
string s2=s.substr(i,count-1);
if(s2.compare(s1)==0)
{
flag++;
return true;
}
}
if(flag==0)
return false;
}
}











string max_substring(student s[10],string s1,int n)
{
int i,j,k,count,Freq,ind,ans=0;
for(k=0;k<n;k++)
{
Freq=0;
for(i=0;i<(s[k].name).length();i++)
{
count=0;
for(j=i;j<(s[k].name).length();j++)
{
count++;
string s2=(s[k].name).substr(i,count-1);
if(match_substr(s2,s[k].name))
{
Freq++;
}
}
}
if(ans<Freq)
{
ind=k;
}
ans=max(ans,Freq);
}
return s[ind].name;
}



void print(student s[10],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"rollno="<<s[i].roll_no<<endl;
cout<<"percentage="<<s[i].per<<endl;
cout<<"\n\n";
}
}





int main()
{
int n,i;
string s2;
cout<<"enter no of students:-";
cin>>n;
student s[10],*p,obj;
p=obj.getdetails(s,n);
cout<<"enter name want to correct:-";
cin>>s2;
string s3=max_substring(s,s2,n);
for(i=0;i<n;i++)
{
if((s[i].name).compare(s3)==0)
{
s[i].name=s2;
} 
}
print(s,n);
return 0;
}





    