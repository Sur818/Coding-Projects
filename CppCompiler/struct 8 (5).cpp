#include<iostream>
using namespace std;
struct chapter
{
string name;
string text;
int ch_no;
};

struct book
{
int b_id;
string b_name;
string author_name;
int no;
struct chapter s[100];
};
struct book *details(struct book [],int);
int main ()
{
string s1;
int n,no,i,ind;
struct book b[10];
cout<<"no of books:-";
cin>>n;
details(b,n);
cout<<"enter chapter no you wmat to read:-";
cin>>no;
cout<<"book name:-";
getline(cin,s1);
for(i=0;i<n;i++)
{
if(s1.compare(b[i].b_name)==0)
{
cout<<b[i].s[no].text;
break;
}
}

return 0;
}

struct book *details(struct book b[10],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"book name:-";
getline(cin,b[i].b_name);
cout<<"auther name:-";
getline(cin,b[i].author_name);
cout<<"enter no of chapter:-";
cin>>b[i].no;
for(j=0;j<b[i].no;j++)
{
cin.ignore();
cout<<"enter chapter name:-";
getline(cin,b[i].s[j].name);
cout<<"enter chapter no:-";
cin>>b[i].s[j].ch_no;
cin.ignore();
cout<<"enter text:-";
getline(cin,b[i].s[j].text);
cout<<"\n";
}
}
return b;
}






    