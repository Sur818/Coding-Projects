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
int i,n;
string s;
cout<<"enter no of book:-";
cin>>n;
book b[100],*p;
p=getdetails(b,n);
cout<<"enter some word from text to getdetails:-";
getline(cin,s);
for(i=0;i<n;i++)
{
if(match_substring(b[i].text,n,s))
{
cout<<"book name="<<b[i].book_name<<endl;
cout<<"book id="<<b[i].book_id<<endl;
cout<<"auther name:-"<<b[i].auther_name<<endl;
cout<<"text:-"<<b[i].text<<endl;
}
}
return 0;
}
