#include<iostream>
using namespace std;
string sorting(string s)
{
sort(s.begin(),s.end());
return s;
}
void anagram_pair(string s,string s1,int i)
{
int k,pos=i+1;
int n=s.length(),j,count=0;
string s2,s3,s4;
s3=sorting(s1);
k=pos;
for(j=pos;j<n;j++)
{
count++;
if(s[j]==' ')
{
s2=s.substr(k,count-1);
s4=sorting(s2);
if(s3.compare(s4)==0)
{
cout<<s1<<"&"<<s2<<endl;
}
k=j+1;
count=0;
}
}
}

int main()
{
 string s,s1;
cout<<"\n\nanagram pairs present in sentence :--\n\n";
cout<<"enter string:-";
getline(cin,s);
s=s+" ";
int i,j,n,k=0,count=0;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
anagram_pair(s,s1,i);
count=0;
k=i+1;
}
}
}


    