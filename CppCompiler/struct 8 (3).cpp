#include<iostream>
using namespace std;
struct abz
{
int age;
string name;
string text;
};
int main ()
{
string s;
struct abz *p,d;
p=&d;
cout<<"enter age:-";
cin>>p->age;
cin.ignore();
cout<<"enter name:-";
getline(cin,p->name);
cout<<"enter text:-";
getline(cin,p->text);
cout<<"enter text which want to reverse:-";
getline(cin,s);
int pos=p->text.find(s);
reverse(s.begin(),s.end());
p->text.erase(pos,s.length());
p->text.insert(pos,s,0);
cout<<p->text;
}
 