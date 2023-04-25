#include<iostream>
using namespace std;

struct stu
{
int roll_no;
int age;
string name;
int marks[10][10];
char subname[10][10];
int sum;
int per;
};


struct stu *details(struct stu s[10],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"enter name:-";
getline(cin,s[i].name);
s[i].sum=0;
for(j=0;j<m;j++)
{
cout<<"subject name:-";
gets(s[i].subname[j]);
cin.ignore();
cout<<"enter marks:-";
cin>>s[i].marks[i][j];
s[i].sum=s[i].sum+s[i].marks[i][j];
}
s[i].per=s[i].sum/m;
}
return s;
}


int main()
{
int n,m,i,j;
struct stu s;
struct stu *s1;
cout<<"enter no of students:-";
cin>>n;
cout<<"enter no of Subject:-";
cin>>m;
s1=details(s,n,m);
}




