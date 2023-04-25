#include<iostream>
using namespace std;
bool check_word(string s1,string s2)
{
int i=0,n1=s1.length(),check=0,j=0;
int n2=s2.length();
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(s1[i]==s2[j])
{
check++;
return false;
break;
}
}
}
if(check==0)
{
return true;
}
}



string find_word(string s,string s1,int i)
{
int j,k=i+1,n,count=0,check=0;
string s2;
n=s.length();
for(j=i+1;j<n;j++)
{
count++;
if(s[j]==' ')
{
s2=s.substr(k,count-1);
count=0;
k=j+1;
if(check_word(s1,s2))
{
check++;
return s2;
}
}
}
if(check==0)
{
return "";
}
}

int main()
{
cout<<"pair of word having no common charecter:-\n\n";
  string s,s1,s2;
cout<<"enter string:-";
getline(cin,s);
s=s+" ";
int i,k=0,n,count=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
s2=find_word(s,s1,i);
if(s2!="")
{
cout<<s1<<"&"<<s2<<endl;
}
k=i+1;
count=0;
}
}
}

    