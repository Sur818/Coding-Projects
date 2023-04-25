#include<iostream>
using namespace std;

class students
{
public:
string name;
int roll_no;
int age;
};

bool check_start(string s,char c)
{
if(s.at(0)==c)
return true;
else
return false;
}

int main()
{
int n,i;
char c;
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
cout<<"enter fisr latter of name who's details want to check:-";
cin>>c; 
for(i=0;i<n;i++)
{
if(check_start(s[i].name,c))
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no:-"<<s[i].roll_no<<endl;
}
}
return 0;
}



    