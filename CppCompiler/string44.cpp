#include<iostream>
using namespace std;

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
cout<<s3<<endl;
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
string s1,s2;
cout<<"enter string:-";
getline(cin,s1);
cout<<"enter sentence want to search:-";
getline(cin,s2);
if(check(s1,s2))
{
cout<<"present:-";
}
else
{
cout<<"not present:-";
}
}
