#include<iostream>
using namespace std;

struct comp
{
string comp_name;
int no;
string emp[10];
int age[10];
int pincode[10];
};

struct comp employe(struct comp v)
{
int i;
cout<<"company name:-";
cin>>v.comp_name;
cout<<"no of employees:-";
cin>>v.no;
for(i=0;i<v.no;i++)
{
cout<<"enter emp age:-";
cin>>v.age[i];
cin.ignore();
cout<<"enter emp name:-";
getline(cin,v.emp[i]);
cout<<"enter pincode::-";
cin>>v.pincode[i];
}
return v;
}



int main() 
{
string s;
int i;
struct comp v;
v=employe(v);
cout<<"enter employee name which details you want:-";
getline(cin,s);
for(i=0;i<v.no;i++)
{
if(s.compare(v.emp[i])==0)
{
cout<<"emp name="<<v.emp[i]<<endl;
cout<<"emp age="<<v.age[i]<<endl;
cout<<"pincode="<<v.pincode[i];
}
}
return 0;
}




