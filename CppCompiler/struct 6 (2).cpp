#include<iostream>
using namespace std;
bool string_endwith(string, char );

struct stu
{
int age;
string id;
string name;
string adress;
};



int main()
{
char e;
struct stu s[10];
int i,n;
cout<<"how many students are present:-";
cin>>n;
cin.ignore();
for(i=0;i<n;i++)
{ 
cout<<"enter name:-";
getline( cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cin.ignore();
cout<<"enter id:-";
getline(cin,s[i].id);
cout<<"enter adress:-";
getline(cin,s[i].adress);
}
cout<<"which charecter want to in the end of employees name-";
cin>>e;
for(i=0;i<n;i++)
{
string s1=s[i].name;
if(string_endwith(s1,e))
{
cout<<"name="<<s[i].name<<endl;
cout<<" id="<<s[i].id<<endl;
cout<<"adress="<<s[i].adress<<endl;
}
}
return 0;
}

bool string_endwith(string s,char e)
{
int n=s.length();
if(s[n-1]==e)
{
return true;
}
else
return false;
}



