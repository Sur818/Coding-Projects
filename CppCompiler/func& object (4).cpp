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

void display(book b[],int index1,int index2)
{
cout<<"book name="<<b[index1].book_name<<endl;
cout<<"book id:-"<<b[index1].book_id<<endl;
cout<<"author name:-"<<b[index1].author_name<<endl;
cout<<"chapter name="<<b[index1].ch[index2].chap_name<<endl;
cout<<"text="<<b[index1].ch[index2].text<<endl;
}

string maxlength_string(string s)
{
int i,k=0,count=0,ans=0,len;
string s1,s2;
s=s+" ";
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
len=s1.length();
if(ans<len)
{
s2=s1;
}
ans=max(ans,len);
k=i+1;
count=0;
}
}
return s2;
}


int main()
{
int n,i,j,ans=0,len,index1,index2;
string s,s1;
cout<<"no of book:-";
cin>>n;
book b[n];
getdetails(b,n);
cout<<"this program print longest word present in book of library:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<b[i].no;j++)
{
 s=maxlength_string(b[i].ch[j].text);
len=s.length();
if(len>ans)
{
 s1=s;
index1=i;
index2=j;
}
ans=max(ans,len);
}
}
cout<<"longest word are in book of. library:-"<<s1<<endl;
display(b,index1,index2);
return 0;
}


    