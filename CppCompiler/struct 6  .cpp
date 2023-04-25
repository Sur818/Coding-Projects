#include<iostream>
using namespace std;

struct stu
{
int roll_no;
int age;
string name;
string text;
};

struct stu *getinformation(struct stu s[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter text:-";
getline(cin,s[i].text);
cout<<"\n";
}
return s;
}

int main()
{
string s2,s3,s4;
int i,j,k,count=0,n,ind;
cout<<"enter no of students:-";
cin>>n;
struct stu s[10];
struct stu *s1;
s1=getinformation(s,n);
cout<<"enter employee name:-";
getline(cin,s4);
for(i=0;i<n;i++)
{
if(s[i].name.compare(s4)==0)
{
 ind=i;
break;
}
}
cout<<"which string want to delete in text:-";
getline(cin,s2);
s1[ind].text=s1[ind].text+" ";
for(i=0;i<s1[ind].text.length();i+=k)
{
k=0;
count=0;
for(j=i;j<s1[ind].text.length();j++)
{
count++;
if(s1[ind].text[j]==' ')
{
if(k==0)
{
k=count;
}
s3=(s1[ind].text).substr(i,count-1);
if(s3.compare(s2)==0)
{
s1[ind].text.erase(i,count);
break;
}
}
}
}
cout<<"after modification details of employees:--\n";
for(i=0;i<n;i++)
{
cout<<"details of employe-"<<i<<"-->\n";
cout<<"name="<<s1[i].name<<endl;
cout<<"age="<<s1[i].age<<endl;
cout<<"roll no="<<s1[i].roll_no<<endl;
cout<<"text="<<s1[i].text<<endl;
cout<<"\n\n";
}
return 0;
}







