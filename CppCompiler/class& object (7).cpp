#include<iostream>
using namespace std;

class  student
{
public:
int roll_no;
string name;
string id;
int age;
string adress;
};

bool check_present(string s,string p_code)
{
int i,j,flag=0;
string s1,s2="pincode-"+p_code;
for(i=0;i<=s.length();i++)
{
for(j=i;j<=s.length();j++)
{
string s1=s.substr(i,j);
cout<<s1<<endl;
if(s1.compare(s2)==0)
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

int main()
{
student s[10];
int n,i;
string p_code;
cout<<"how many students:-";
cin>>n;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter id:-";
getline(cin,s[i].id);
cout<<"enter adress:-";
getline(cin,s[i].adress);
}
cout<<"enter pincode of students want to details:-";
cin>>p_code;
for(i=0;i<n;i++)
{
if(check_present(s[i].adress,p_code))
{
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"id="<<s[i].id<<endl;
cout<<"roll_no="<<s[i].roll_no<<endl;
cout<<"address="<<s[i]. adress<<endl;
}
}
return 0;
}


    