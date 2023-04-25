#include<iostream>
#include<cstring>
using namespace std;

string str(string s,int n, string s2,int i=0)
{
static int start=0,count=0;
string s1,s3="";
if(i<n)
{
 count++;
if(s[i]==' ')
{
s1=s.substr(start,count);
if(s1.compare(s2)!=0)
{
cout<<s1<<endl;
}
start=i;
count=0;
}
return str(s,n,s2,i+1);
}
else
return s3;
}



int main()
{
 string s,s2;
cout<<"enter name:-";
getline(cin,s);
s=s+" ";
int n=s.length();
cout<<"which word wants to delete=";
cin>>s2;
str(s,n,s2);
}