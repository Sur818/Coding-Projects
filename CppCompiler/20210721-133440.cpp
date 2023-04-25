#include<iostream>
using namespace std;

class book
{
public:
int book_id;
string book_name;
string auther_name;
int no;
class chapters
{
public:
string chap_name;
string text;
};
chapters s1[100];
};

book *getdetails(book b[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"enter book_id:-";
cin>>b[i].book_id;
cin.ignore();
cout<<"enter book name:-";
getline(cin,b[i].book_name);
cout<<"enter auther name:-";
getline(cin,b[i].auther_name);
cout<<"\n";
cout<<"enter no of chapters:-";
cin>>b[i].no;
for(j=0;j<b[i].no;j++)
{
cin.ignore();
cout<<"enter chapter name:-";
getline(cin,b[i].s1[j].chap_name);
cout<<"enter text:-";
getline(cin,b[i].s1[j].text);
}
cout<<"\n\n";
}
return b;
}




int main()
{
int i,n,j;
string s;
cout<<"enter no of book:-";
cin>>n;
book b[100],*p;
p=getdetails(b,n);
cout<<"select book acoording to book name:-";
getline(cin,s);
for(i=0;i<n;i++)
{
if((b[i].book_name).compare(s)==0)
{
cout<<"select chapter:-";
cin>>chap;
for(j=0;j<b[i].no;j++)
{
if(j+1==chap)
cout<<"enter text want to delete:-\n";
getline(cin,s1);






return 0;
}
    