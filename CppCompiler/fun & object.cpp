#include<iostream>
using namespace std;

class book
{
public:
int book_id;
string book_name;
string author_name;
int no;
class chapters
{
public:
string chap_name;
string text;
};
chapters ch[100];
};

book *getdetails(book b[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"enter book id:-";
cin>>b[i].book_id;
cin.ignore();
cout<<"enter book_name:-";
getline(cin,b[i].book_name);
cout<<"enter author name:-";
getline(cin,b[i].author_name);
cout<<"enter no of chapters int this book:-";
cin>>b[i].no;
for(j=0;j<b[i].no;j++)
{
cin.ignore();
cout<<"enter chapter name:-";
getline(cin,b[i].ch[j].chap_name);
cout<<"Enter text:-";
getline(cin,b[i].ch[j].text);
cout<<"\n";
}
cout<<"\n\n";
}
return b;
}



int main()
{
int n,i,j;
string name;
cout<<"no of book:-";
cin>>n;
book b[n],*p;
getdetails(b,n);
cin.ignore();
cout<<"which book want to read:-";
getline(cin,name);
for(i=0;i<n;i++)
{
if((b[i].book_name).compare(name)==0)
{
for(j=0;j<b[i].no;j++)
{
cout<<"chapter "<<j+1<<":-"<<endl;
cout<<b[i].ch[j].text;
cout<<"\n\n";
}
}
}
return 0;
}

