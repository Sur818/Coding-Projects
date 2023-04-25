#include<iostream>
using namespace std;

struct book
{
string book_title;
string book_name;
int book_id;
string author;
string text;
int chap_no;
string chap_name;
};

struct book *details(struct book s[],int n)
{
int i,m=10,j;
for(i=0;i<n;i++)
{
 cout<<"enter book-id:-";
cin>>s[i].book_id;
cin.ignore();
cout<<"enter title name:-";
getline(cin,s[i].book_title);
cout<<"enter book_name:-";
getline(cin,s[i].book_name);
cout<<"enter auther name:-";
getline (cin,s[i].author);
for(j=0;j<m;j++)
{
cout<<"enter chapter no:-";
cin>>s[i][j].chap_no;
cin.ignore();
cout<<"enter chapter name:-";
cin>>s[i][j].chap_name;
cout<<"enter text:-"; 
getline(cin,s[i][j].text);
cin.ignore();
}
}
return s;
}

bool check(string s2 ,string s1)
{
string s3;
int i,j,k,flag=0,count=0;
s2=s2+" ";
for(i=0;i<s2.length();i+=k)
{
k=0;
count=0;
for(j=i;j<s2.length();j++)
{
count++;
if(s2[j]==' ')
{
if(k==0)
{
k=count;
}
s3=s2.substr(i,count-1);
if(s3.compare(s1)==0)
{
flag++;
return true;
}
}
}
}
if(flag==0)
{
return false;
}
}


int main()
{
int i,n;
string s1,s2;
cout<<"no of book:-";
cin>>n;
struct book s[10];
details(s,n);
cout<<"which sentences/word you check written in book:-";
getline(cin,s1);

/*for(i=0;i<n;i++)
{
s2=s[i].text;
if(check(s2,s1))
{
cout<<"book name:-"<<s[i].book_name<<endl;
cout<<"book_title:-"<<s[i].book_title<<endl;
cout<<"book_author:-"<<s[i].author<<endl;
}
}*/

return 0;
}




    