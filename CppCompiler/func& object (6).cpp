#include<iostream>
using namespace std;

class students
{
public:
int age;
int roll_no;
string name;
int no;
class books
{
public:
int book_id;
string book_name;
string author_name;
int no_chap;
class chapters
{
public:
string chap_name;
string text;
};
chapters *ch=new chapters();
};
books *b=new books();
};

students *getdetails(students s[],int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
cin.ignore();
cout<<"enter name:-";
getline(cin,s[i].name);
cout<<"enter age:-";
cin>>s[i].age;
cout<<"enter roll_no:-";
cin>>s[i].roll_no;
cout<<"enter no of books:-";
cin>>s[i].no;
for(j=0;j<s[i].no;j++)
{
cin.ignore();
cout<<"enter book_name:-";
getline(cin,s[i].b[j].book_name);
cout<<"enter author name:-";
getline(cin,s[i].b[j].author_name);
cout<<"enter book_id:-";
cin>>s[i].b[j].book_id;
cout<<"enter no of chapters:-";
cin>>s[i].b[j].no_chap;
for(k=0;k<s[i].b[j].no_chap;k++)
{
cin.ignore();
cout<<"enter chapter name:-";
getline(cin,s[i].b[j].ch[k].chap_name);
cout<<"enter text:-";
getline(cin,s[i].b[j].ch[k].text);
}
}
}
cout<<"\n\n";
return s;
}

void display(students s[],int n,int i)
{
int j,k;
cout<<"name="<<s[i].name<<endl;
cout<<"age="<<s[i].age<<endl;
cout<<"roll no="<<s[i].roll_no<<endl;
for(j=0;j<s[i].no;j++)
{
cout<<"book name="<<s[i].b[j].book_name<<endl;
cout<<"author name="<<s[i].b[j].author_name<<endl;
cout<<"book id="<<s[i].b[j].book_id<<endl;
cout<<"\n";
for(k=0;k<s[i].b[j].no_chap;k++)
{
cout<<"chapter name="<<s[i].b[j].ch[k].chap_name<<endl;
cout<<"text:-"<<s[i].b[j].ch[k].text<<endl;
}
cout<<"\n\n";
}
}



int main()
{
int i,n;
string  s1;
cout<<"enterno of students:-";
cin>>n;
students s[n],*p;
p=getdetails(s,n);
cin.ignore();
cout<<"enter name of student to get details:-";
getline(cin,s1);
for(i=0;i<n;i++)
{
if((s[i].name).compare(s1)==0)
{
display(s,n,i);
break;
}
}
return 0;
}



    