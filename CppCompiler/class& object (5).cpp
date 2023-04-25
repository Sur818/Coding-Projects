#include<iostream>
using namespace std;

class students
{
public:
string name;
int roll_no;
int age;
};

string sir_name(string s)
{
int i,count=0;
for(i=0;i<s.length();i++)
{
count++;
if(s[s.length()-1-i]==' ')
{
string s1=s.substr(s.length()-count+1,count);
return s1;
break;
}
}
}


int main()
{
int n,i;
string s1,s2;
cout<<"enter no of students:-";
cin>>n;
students s[n];
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter student name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cout<<"\n\n";
}
cout<<"enter sir name which details want to know:-";
cin>>s1;
for(i=0;i<n;i++)
{
s2=sir_name(s[i].name);
if((s2).compare(s1)==0)
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no:-"<<s[i].roll_no<<endl;
}
}
return 0;
}



    