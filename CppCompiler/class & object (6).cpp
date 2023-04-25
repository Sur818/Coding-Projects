#include<iostream>
using namespace std;

class students
{
public:
string name;
int age;
int roll_no;
};
students *getdetails(students *s,int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,(s+i)->name);
cout<<"age=";
cin>>(s+i)->age;
cout<<"roll no=";
cin>>(s+i)->roll_no;
}
return s;
}

int main()
{
int n,i;
string s1;
cout<<"enter no of students:-";
cin>>n;
students *s;
s=(students*)malloc(n*sizeof(students));
s=getdetails(s,n);
cout<<"enter name to get details:-";
cin>>s1;
for(i=0;i<n;i++)
{
if(((s+i)->name).compare(s1)==0)
{
cout<<"name="<<(s+i)->name<<endl;
cout<<"age="<<(s+i)->age<<endl;
cout<<"roll_no="<<(s+i)->roll_no<<endl;
}
}
return 0;
}



