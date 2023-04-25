#include<iostream>
using namespace std;
class student
{
public:
int age;
string name;
int roll_no;
string adress;
int no;
string sub_name[10];
int marks[10];
int per;
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
cout<<"enter no of Subject:-";
cin>>s[i].no;
int sum=0;
for(int j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"enter subject name:-";
getline(cin,s[i].sub_name[j]);
cout<<"enter Mark=";
cin>>s[i].marks[j];
sum=sum+s[i].marks[j];
}
s[i].per=sum/(s[i].no);
cout<<"\n";
}
return s;
}
};

void print(student *p,int n)
{
int j;
cout<<"name="<<p[n].name<<endl;
cout<<"age="<<p[n].age<<endl;
cout<<"adress="<<p[n].adress<<endl;
cout<<"roll no="<<p[n].roll_no<<endl;
for(j=0;j<p[n].no;j++)
{
cout<<p[n].sub_name[j]<<"="<<p[n].marks[j]<<endl;
}
cout<<p[n].per;
cout<<"\n\n";
}


int main()
{
int n,i,j,ans=0,ind;
string s1;
cout<<"enter no of students:-";
cin>>n;
student s[100],obj;
student *p;
p=obj.getdetils(s,n);
cout<<"the  students whose hindi marks max his details are details are:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((p[i].sub_name[j]).compare("hindi")==0)
{
if(ans<p[i].marks[j])
{
ind=i;
}
ans=max(ans,p[i].per);
}
}
}
print(p,ind);
}

    