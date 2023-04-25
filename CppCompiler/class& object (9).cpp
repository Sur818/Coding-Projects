#include<iostream>
using namespace std;
class student
{
public:
int age;
string name;
int roll_no;
string adress;
string mob_no;
student *getdetils(student s[10],int n)
{
for(int i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"roll no:-";
cin>>s[i].roll_no;
cin.ignore();
cout<<"enter adress:-";
getline(cin,s[i].adress);
cout<<"mobile no:-";
getline(cin,s[i].mob_no);
}
return s;
}
};

void print(student *p,int n)
{
cout<<"name="<<p[n].name<<endl;
cout<<"age="<<p[n].age<<endl;
cout<<"adress="<<p[n].adress<<endl;
cout<<"roll no="<<p[n].roll_no<<endl;
cout<<"mobile no="<<p[n].mob_no<<endl;
cout<<"\n\n";
}

int check_count(string s1, string s2)
{
int i,j,count=0;
for(i=0;i<=s1.length();i++)
{
for(j=0;j<=s2.length();j++)
{
if(s1[i]==s2[j])
count++;
}
}
return count;
}




int main()
{
cout<<"this program help to find details of students whose mobile no similar to entered mobile no:-";
int n,i,ans=0,ind,a;
string s1;
cout<<"enter no of students:-";
cin>>n;
student s[100],obj;
student *p;
p=obj.getdetils(s,n);
cout<<"enter mobile no:-";
cin>>s1;
for(i=0;i<n;i++)
{
int a=check_count(s1,p[i].mob_no);
if(a>ans)
{
ind=i;
}
ans=max(ans,a);
}
print(p,ind);
return 0;
}

    