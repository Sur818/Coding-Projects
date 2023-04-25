#include<iostream>
using namespace std;

int main()
{
int i,j,k=0,count=0,t,flag=0;
string s,s1,s2;
cout<<"enter string:-";
getline(cin,s);
s=s+" ";
cout<<"print unique word present in the string:-\n";
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
count=0;
k=i+1;
for(j=k;j<s.length();j++)
{
count++;
if(s[j]==' ')
{
s2=s.substr(k,count-1);
if(s2.compare(s1)==0)
{
flag++;
for(t=k;t<j;t++)
{
s[t]='\0';
}
}
k=j+1;
count=0;
}
}
cout<<s1<<endl;
k=i+1;
}
}
return 0;
}




