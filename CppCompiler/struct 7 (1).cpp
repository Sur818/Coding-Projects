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
string s1,s2;
struct chapter s;
s=insertion();
cout<<"\n\ntext written in chapter:-";
cout<<s.text<<endl;
cout<<"which sentence want to insert:-";
getline(cin,s1);
cout<<"after which word:-";
cin>>s2;
int p=s.text.find(s2);
cout<<p;
p=p+s2.length()+1;
s.text.insert(p,s1+" ",0);
cout<<"after insertion:-\n";
cout<<s.text;
}




    