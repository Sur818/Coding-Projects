#include<iostream>
using namespace std;
struct book
{
int id;
string b_name;
string a_name;
int chap_no[10];
string chap_name[100];
string text[100];
};
struct book *details (struct book s[10],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"book_id:-";
cin>>s[i].id;
cin.ignore();
cout<<"book_name:-";
getline (cin,s[i].b_name);
cout<<"author name:-";
getline (cin,s[i].a_name);
for(j=0;j<m;j++)
{
cout<<"chapter no:-";
cin>>s[i].chap_no[j];
cin.ignore();
cout<<"chapter name:-";
getline(cin,s[i].chap_name[j]);
cout<<"text:-";
getline(cin,s[i].text[j]);
}
}
return s;
}

int main()
{
int i,j,n,m,p,a,b,count=0,k=0;
string s2,s3,s4;
struct book s[10],*s1;
cout<<"enter no of book:-";
cin>>n;
cout<<"enter no of chapters:-";
cin>>m;
s1=&s[0];
s1=details(s,n,m);
cout<<"enter word to which want to replace:-";
getline(cin,s2);
cout<<"from which word:-";
getline(cin,s3);
cout<<"from which  no of book:-";
cin>>a;
cout<<"from which chapter:-";
cin>>b;
s[a-1].text[b-1]=s[a-1].text[b-1]+" ";
for(i=0;i<s[a-1].text[b-1].length();i++)
{
count++;
if(s[a-1].text[b-1][i]==' ')
{
string s4=s[a-1].text[b-1].substr(k,count-1);
if(s4.compare(s2)==0)
{
s[a-1].text[b-1].replace(k,s3.length(),s3+" ");
}
k=i+1;
count=0;
}
}
for(i=0;i<n;i++)
{
cout<<"book-name="<<s[i].b_name<<endl;
for(j=0;j<m;j++)
{
cout<<"chapter name="<<s[i].chap_name[j]<<endl;
cout<<"text ="<<s[i].text[j]<<"\n\n";
}
}
return 0;
}
