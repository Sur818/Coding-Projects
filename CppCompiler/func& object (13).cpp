#include<iostream>
#include<sstream>
using namespace std;

class students
{
public:
int age;
string stu_name;
string mob_no;
int no;
string sub_name[10];
int *marks;
int *per;
};



students *getdetails(students *s,int n)
{
int i,j,sum;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].stu_name);
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter mobile_no:-";
getline(cin,s[i].mob_no);
cout<<"enter no of Subject:-";
cin>>s[i].no;
sum=0;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"string name:-";
getline(cin,s[i].sub_name[j]);
s[i].marks= (int*)malloc(s[i].no*sizeof(int));
cout<<"enter this subject marks:-";
cin>>s[i].marks[j];
sum=sum+s[i].marks[j];
}
s[i].per[i]=new int[n];
s[i].per[i]=sum/s[i].no;
cout<<"\n\n";
}
return s;
}

bool present_no(int no,string s)
{
int i,j,count,flag=0;
string s1;
for(i=0;i<s.length();i++)
{
count=0;
for(j=i;j<s.length();j++)
{
count++;
s1=s.substr(i,count);
int n;
istringstream(s1)>>n;
if(no==n)
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

void print(students *s,int n)
{
cout<<"name="<<s[n].stu_name<<endl;
cout<<"age="<<s[n].age<<endl;
cout<<"mobile no:-"<<s[n].mob_no<<endl;
cout<<"percentage="<<s[n].per<<endl;
cout<<"\n\n";
}


int main()
{
int i,n,no;
cout<<"no of students:-";
cin>>n;
students *s=new students();
getdetails(s,n); 
cout<<"last some digit of mobile no to get information:-\n";
cin>>no;
for(i=0;i<n;i++)
{
if(present_no(no,s[i].mob_no))
{
print(s,i);
cout<<"\n\n";
}
}
return 0;
}






