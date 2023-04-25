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

void display(book b[],int n)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"book name="<<b[i].book_name<<endl;
cout<<"book id:-"<<b[i].book_id<<endl;
cout<<"author name:-"<<b[i].author_name<<endl;
for(j=0;j<b[i].no;j++)
{
cout<<"chapter name="<<b[i].ch[j].chap_name<<endl;
cout<<"text="<<b[i].ch[j].text<<endl;
}
}
}

bool ispalindrome(string s)
{
int flag=0;
string s1=s;
reverse(s.begin() ,s.end());
if(s1.compare(s)==0)
{
flag++;
return true;
}
if(flag==0)
return false;
}


void print_Pstring(string s)
{
int i,k=0,count=0;
s=s+" ";
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
string s1=s.substr(k,count-1);
k=i+1;
count=0;
if(ispalindrome(s1))
{
cout<<s1<<endl;
}
}
}
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
for(i=0;i<n;i++)
{
for(j=0;j<b[i].no;j++)
{
print_Pstring(b[i].ch[j].text);
}
}
return 0;
}

