#include<iostream>
using namespace std;

struct book
{
string book_title;
string book_name;
int book_id;
string author;
string text[100][100];
int chap_no[100][100];
string chap_name[100][100];
};

struct book *details(struct book s[],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
 cout<<"enter book-id:-";
cin>>s[i].book_id;
cin.ignore();
cout<<"enter title name:-";
getline(cin,s[i].book_title);
cout<<"enter book_name:-";
getline(cin,s[i].book_name);
cout<<"enter auther name:-";
getline (cin,s[i].author);
cin.ignore();
for(j=0;j<m;j++)
{
cout<<"enter chapter no:-";
cin>>s[i].chap_no[i][j];
cout<<"enter chapter name:-";
cin>>s[i].chap_name[i][j];
cout<<"enter text:-";
cin.ignore(); 
getline(cin,s[i].text[i][j]);
}
}
return s;
}



int main()
{
int i,n;
string s1,s2;
cout<<"no of book:-";
cin>>n;
struct book s[10];
details(s,n,3);
cout<<"find what wrriten in book 1 and chapter 2:-\n";
cout<<s[0].text[0][1];
cout<<"\nwhat is the chapter2 name of book1 :-";
cout<<s[0].chap_name[0][1];
return 0;
}




    