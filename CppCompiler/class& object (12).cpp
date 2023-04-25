#include<iostream>
using namespace std;

class students
{
public:
int age;
int roll_no;
string name;
string adress;
void getdetails(students s[10],int n)
{
for(int i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll no:-";
cin>>s[i].roll_no;
cin.ignore();
cout<<"address=";
getline(cin,s[i].adress);
}
}
};


bool check_present(string s,string s1)
{
int i,j,flag=0,count;
for(i=0;i<=s1.length();i++)
{
count=0;
for(j=i+1;j<=s1.length();j++)
{
count++;
string s2=s1.substr(i,count);
//cout<<s2<<endl;
if(s2.compare(s)==0)
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

void print(students s[10],int n)
{
cout<<"name="<<s[n].name<<endl;
cout<<"roll no="<<s[n].roll_no<<endl;
cout<<"adress="<<s[n].adress<<endl;
cout<<"age="<<s[n].age<<endl;
}


int main()
{
int n,i;
string s1;
cout<<"enter no students :-";
cin>>n;
students s[10],obj;
obj.getdetails(s,n);
cout<<"enter some details of adress to get students:-";
getline(cin,s1);
for(i=0;i<n;i++)
{
if(check_present(s1,s[i].adress))
{
print(s,i);
}
}
return 0;
}





