#include<iostream>
using namespace std;

class book
{
public:
int book_id;
string book_name;
string auther_name;
string text;
};

book *getdetails(book b[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"enter book_id:-";
cin>>b[i].book_id;
cin.ignore();
cout<<"enter book name:-";
getline(cin,b[i].book_name);
cout<<"enter auther name:-";
getline(cin,b[i].auther_name);
cout<<"enter text:-";
getline(cin,b[i].text);
cout<<"\n\n";
}
return b;
}


int main ()
{
int i,n,id;
cout<<"enter no of book:-";
cin>>n;
book b[100],*p;
p=getdetails(b,n);
cout<<"enter book id to getdetails:-";
cin>>id;
for(i=0;i<n;i++)
{
if(b[i].book_id==id)
{
cout<<"book name="<<b[i].book_name<<endl;
cout<<"book id="<<b[i].book_id<<endl;
cout<<"auther name:-"<<b[i].auther_name<<endl;
cout<<"text:-"<<b[i].text<<endl;
}
}
return 0;
}
