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

bool match_substring(string s,int n,string s1)
{
int i,j,flag=0,count;
for(i=0;i<s.length();i++)
{
count=0;
for(j=0;j<s.length();j++)
{
count++;
string s2=s.substr(i,count-1);
if(s2.compare(s1)==0)
{
flag++;
return true;
break;
}
}
}
if(flag==0)
return false;
}



int main ()
{
int i,n,j;
string s;
cout<<"enter no of book:-";
cin>>n;
book b[100],*p;
p=getdetails(b,n);
cout<<"enter book name to get details:-\n";
getline(cin,s);
for(i=0;i<n;i++)
{
if((b[i].book_name).compare(s)==0)
{
cout<<"name="<<b[i].book_name<<endl;
cout<<"auther name="<<b[i].auther_name<<endl;
cout<<"book id="<<b[i].book_id<<endl;
for(j=0;j<b[i].no;j++)
{
cout<<"chapter name:-"<<b[i].s1[j].chap_name<<endl;
cout<<"text in this chapter="<<b[i].s1[j].text<<endl;
}
}
}
return 0;
}
    