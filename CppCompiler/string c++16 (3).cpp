#include<iostream>
using namespace std;
string modify (string );
int main()
{
  string s,s1,s2,s3="";
cout<<"enter string:-";
getline(cin,s);
cout<<"in which word you want to modify:-";
cin>>s1;
s=s+" ";
int i,k=0,n,count=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s2=s.substr(k,count-1);
if(s1.compare(s2)==0)
{
s2=modify(s2);
}
s3=s3+s2+" ";
k=i+1;
count=0;
}
}
cout<<s3;
}

string modify(string s)
{
int n,i,k,l=s.length();
cout<<"for insertion enter 2:-";
cout<<"\n for deletion enter 1:-";
cin>>n;
switch (n)
{
case 1:
{
char ch;
string s1;
cout<<"enter element want to delete:-";
cin>>ch;
for(i=0;i<l;i++)
{
if(s[i]==ch)
{
for(k=i;k<l;k++)
{
s[k]=s[k+1];
}
}
}
s1=s.substr(0,l-1);
return s1;
break;
}
case 2:
{
char b;
int m;
string s1;
s.resize(l+1);
cout<<"which element want to insert:-";
cin>>b;
cout<<"which posn:-";
cin>>m;
for(i=l-1;i>=m-1;i--)
{
s[i+1]=s[i];
}
s[m-1]=b;
s1=s.substr(0,l+1);
return s1;
break;
}
}
}



