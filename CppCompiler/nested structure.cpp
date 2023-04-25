#include<iostream>
using namespace std;
struct chapter
{
int chapter_no;
string chapter_name;
string text;
};

struct book
{
int book_id;
string book_name;
string book_auther;
struct chapter s1;
};

struct book details()
{
struct book s;
cout<<"enter book_id:-";
cin>>s.book_id;
cin.ignore();
cout<<"enter book_name:-";
getline(cin,s.book_name);
cout<<"enter chapter name:-";
getline(cin,s.s1.chapter_name);
cout<<"enter text in this chapter:-";
getline(cin,s.s1.text);
return s;
}


void display (struct book s)
{
cout<<"\n book_id:-"<<s.book_id;
cout<<"\n book name="<<s.book_name;
cout<<"\n chapter name:+"<<s.s1.chapter_name;
cout<<"\n text="<<s.s1.text;
}
int main()
{
struct book s;
s=details ();
display(s);

}

