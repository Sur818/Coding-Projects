#include<iostream>
using namespace std;
struct book
{
int book_id;
string book_name;
string author_name;
};

struct book *bookde()
{
struct book *s;
cout<<"enter book id:-";
cin>>s->book_id;
cin.ignore();
cout<<"book_name:-";
getline(cin,s->book_name);
cout<<"enter author name:-";
getline(cin,s->author_name);
return s;
}


int main()
{
struct book *s;
s=bookde();
cout<<"\nbook name:-"<<s->book_name;
cout<<"\nbook id:-"<<s->book_id;
cout<<"\n author name:-"<<s->author_name;

}
