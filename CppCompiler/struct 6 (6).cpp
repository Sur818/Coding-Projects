#include<iostream>
using namespace std;

struct stu
{
int roll_no;
int age;
string name;
string text;
};

struct stu getinformation(struct stu s)
{
cout<<"enter roll no:-";
cin>>s.roll_no;
cout<<"enter age:-";
cin>>s.age;
cin.ignore();
cout<<"enter name:-";
getline(cin,s.name);
cout<<"enter text:-";
getline(cin,s.text);
return s;
}

int main()
{
string s2,s3;
int i,j,k,count=0;
struct stu s;
struct stu s1;
s1=getinformation(s);
cout<<"which string want to delete in text:-";
getline(cin,s2);
s1.text=s1.text+" ";
for(i=0;i<s1.text.length();i+=k)
{
k=0;
count=0;
for(j=i;j<s1.text.length();j++)
{
count++;
if(s1.text[j]==' ')
{
if(k==0)
{
k=count;
}
s3=(s1.text).substr(i,count-1);
if(s3.compare(s2)==0)
{
s1.text.erase(i,count);
break;
}
}
}
}
cout<<"name="<<s1.name<<endl;
cout<<"age="<<s1.age<<endl;
cout<<"roll no="<<s1.roll_no<<endl;
cout<<"text="<<s1.text;
}







