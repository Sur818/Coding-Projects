#include<iostream>
using namespace std;

struct car
{
int no;
string name;
string model;
};
struct car *details( struct car[],int );
int main ()
{
string s;
int i,n;
cout<<"how many car are present :-";
cin>>n;
struct car c[100];
struct car *c1;
details(c,n);
cout<<"some charecter of model no car::-";
cin>>s;
for(i=0;i<n;i++)
{
if(c[i].model.find(s)!=-1)
{
cout<<"car name:-"<<c[i].name<<endl;
cout<<"model no:-"<<c[i].model<<endl;
}
}
return 0;
}
struct car *details(struct car c[],int n)
{
int i;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter car name:-";
getline(cin,c[i].name);
cout<<"enter model no:-";
getline(cin,c[i].model);
cout<<"enter car no:-";
cin>>c[i].no;
}
return c;
}

