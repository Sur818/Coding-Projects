#include<iostream>
using namespace std;

struct stu
{
long int rollno;
int age;
string name;
int marks[100][100];
char subname[100][100];
int sum;
int per;
};


struct stu *details(struct stu s[ ],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
s[i].sum=0;
cout<<"enter roll no:-";
cin>>s[i].rollno;
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
for(j=0;j<m;j++)
{
cout<<"subject name:-";
gets(s[i].subname[j]);
cout<<"enter marks:-";
cin>>s[i].marks[i][j];
s[i].sum=s[i].sum+s[i].marks[i][j];
cin.ignore();
}
cout<<"\n\n";
s[i].per=s[i].sum/m;
}
return s;
}


int main()
{
long int roll_no;
int n,m,i,j,index;
struct stu s[10];
struct stu *s1;
cout<<"enter no of students:-";
cin>>n;
cout<<"enter no of Subject:-";
cin>>m;
cout<<"\n\n";
s1=details(s,n,m);
int maxm=max(s[0].sum,s[n-1].sum);
for(i=0;i<n;i++)
{
if(s[i].sum==maxm);
{
index=i;
}
}
cout<<"topper name="<<s[index].name<<endl;
cout<<"roll no="<<s[index].rollno<<endl;
cout<<"and it's details are:-\n\n";
for(j=0;j<m;j++)
{
cout<<s[index].subname[j]<<"=";
cout<<s[index].marks[index][j]<<endl;
}
cout<<"total marks="<<s[index].sum<<endl;
cout<<"percentage="<<s[index].per;
cout<<"\n\n";
cout<<"enter roll no of students to get information:-";
cin>>roll_no;
for(i=0;i<n;i++)
{
if(s[i].rollno==roll_no)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
for(j=0;j<m;j++)
{
cout<<s[i].subname[j]<<"=";
cout<<s[i].marks[i][j]<<endl;
}
cout<<"total marks="<<s[i].sum<<endl;
cout<<"percentage="<<s[i].per;
}
}
}






