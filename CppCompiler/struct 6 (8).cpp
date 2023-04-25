#include<iostream>
using namespace std;
struct chapter
{
int chapter_no;
string chapter_name;
string text;
};

struct chapter insertion()
{
struct chapter s;
cout<<"enter chapter_no:-";
cin>>s.chapter_no;
cin.ignore();
cout<<"enter chapter_name:-";
getline(cin,s.chapter_name);
cout<<"enter text:-";
getline(cin,s.text);
return s;
}
int main ()
{
string s1;
struct chapter s;
s=insertion();
cout<<"\n\ntext written in chapter:-";
cout<<s.text<<endl;
cout<<"which sentence want to delete:-";
getline(cin,s1);
int p=s.text.find(s1);
s.text.erase(p,s1.length()+1);
cout<<"after deletion:-\n";
cout<<s.text;
}




