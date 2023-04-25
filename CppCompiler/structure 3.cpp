#include<iostream>
using namespace std;

struct book
{
int id;
string title;
string auther;
};

void display(struct book b1)
{
cout<<"book id:-"<<b1.id<<endl;
cout<<"book title:-"<<b1.title<<endl;
cout<<"book author:-"<<b1.auther<<endl;
}

struct book getdata(struct book b1)
{
cout<<" enter book id:-";
cin>>b1.id;
cin.ignore();
cout<<"enter book title:-";
getline(cin,b1.title);
cout<<"enter book author:-";
getline(cin,b1.auther);
return b1;
}
int main()
{
struct book b1;
display(getdata(b1));
return 0;
}


