#include<iostream>
using namespace std;

class book
{
public:
int book_id;
string book_name;
string author_name;
int no;
string chap_name[10];
string text[100];
};

book *getdetails(book b[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"enter bool_id";
cin>>b[i].book_id;
cin.ignore();
cout<<"enter book_name::-";
getline(cin,b[i].book_name);
cout<<"enter author name:-";
getline(cin,b[i]. author_name);
cout<<"enter no of chapters:-";
cin>>b[i].no;
for(j=0;j<b[i].no;j++)
{
cin.ignore();
cout<<"enter chapter name:-";
getline(cin,b[i].chap_name[j]);
cout<<"enter text:-";
getline(cin,b[i].text[j]);
cout<<"\n";
}
cout<<"\n\n";
}
return b;
}
 
int match_string(string s1,string s)
{
int i,j,count;
string s2;
for(i=0;i<s.length();i++)
{
count=0;
for(j=i;j<s.length();j++)
{
count++;
s2=s.substr(i,count);
if(s2.compare(s1)==0)
{
return i;
}
}
}
}


void display(book b[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"book name="<<b[i].book_name<<endl;
cout<<"author name="<<b[i].author_name<<endl;
cout<<"no of chapters="<<b[i].no<<endl;
for(j=0;j<b[i].no;j++)
{
cout<<"chapter name="<<b[i].chap_name[j]<<endl;
cout<<"text="<<b[i].text[j]<<endl;
}
}
}


int main()
{
int n,i,j,k,count;
string s,s1,s2;
cout<<"enter no of books:-";
cin>>n;
book p[n],*b;
b=getdetails(p,n);
cout<<"enter text want to delete:-";
getline(cin,s);
cout<<"which book:-";
getline(cin,s1);
cout<<"enter chapter name    :-";
getline(cin,s2);
for(i=0;i<n;i++)
{
if((b[i].book_name).compare(s1)==0)
{
for(j=0;j<b[i].no;j++)
{
if((b[i].chap_name[j]).compare(s2)==0)
{
int ind=match_string(s,b[i].text[j]);
cout<<ind;
count=0;
while(count<=s.length())
{
for(k=ind;k<b[i].text[j].length();k++)
{
b[i].text[j][k]=b[i].text[j][k+1];
}
count++;
}
}
}
}    
}
display(b,n);
return 0;
}




    