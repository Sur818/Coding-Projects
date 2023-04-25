#include<iostream>
using namespace std;

struct book
{
string book_name;
int book_id;
string chapter_name[10][10];
string text[100][100];
int chapter_no[10][10];
};

struct book *getdata(struct book s[],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter book name:-";
getline(cin,s[i].book_name);
cout<<"enter book_id";
cin>>s[i].book_id;
cin.ignore();
for(j=0;j<m;j++)
{
cout<<"enter chapter no:-";
cin>>s[i].chapter_no[i][j];
cin.ignore();
cout<<"enter chapter_name:-";
getline(cin,s[i].chapter_name[i][j]);
cout<<"enter text :-";
getline(cin,s[i].text[i][j]);
}
}
return s;
}

void display (struct book [],int ,int);
int main()
{
string s2;
int i,n,m,c,b,p=0,j;
cout<<"enter no of students:-";
cin>>n;
cout<<"enter no of chapter in book:-";
cin>>m;
struct book s[10],*s1;
s1=getdata(s,n,m);
cout<<"select book_id:-";
cin>>b;
cout<<"chapter no:";
cin>>c;
cin.ignore();
cout<<"enter text:-";
getline(cin,s2);
cin.ignore();
for(i=0;i<n;i++)
{
if(s1[i].book_id==b)
{
 p=s1[i].text[i][c-1].find(s2);
s1[i].text[i][c-1].erase(p,s2.length()+1);
}
}
display(s1,n,m);
}


void display( struct book s[],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"book_id="<<s[i].book_id<<endl;
cout<<"book_name="<<s[i].book_name<<endl;
for(j=0;j<m;j++)
{
cout<<"chapter_name:=";
cout<<s[i].chapter_name[i][j]<<endl;
cout<<"text=";
cout<<s[i].text[i][j]<<endl;
}
}
}

