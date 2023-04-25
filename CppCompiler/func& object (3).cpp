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

int no_word(string s)
{
int i,count=1;
s=s+" ";
for(i=0;i<s.length();i++)
{
if(s[i]==' ')
{
count++;
}
}
return count;
}


int main()
{
int n,i,j,k,len,ans1=0,ans2=0,index1,index2;
cout<<"no of book:-";
cin>>n;
book b[n];
getdetails(b,n);
cout<<"this program print long word contains present in chapter:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<b[i].no;j++)
{
len=no_word(b[i].ch[j].text);
if(ans1<len)
{
k=j;
}
ans1=max(ans1,len);
}
if(ans1>ans2)
{
index1=i;
index2=k;
}
ans2=max(ans2,ans1);
ans1=0;
}
display(b,index1,index2);
return 0;
}

    