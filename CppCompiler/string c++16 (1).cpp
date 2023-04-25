#include<iostream>
using namespace std;

int main()
{
  string s,s1,s2;
cout<<"enter string:-";
getline (cin,s);
s=s+" ";
int i,n,p,check=0,k=0,count=0;
cout<<"which posn word want to reverse:-";
cin>>p;
n=s.length();
for(i=0;i<n;i++)
{
count++;
if(s[i]==' ')
{
check++;
s1=s.substr(k,count-1);
if(check==p)
{
reverse(s1.begin(),s1.end());
}
s2=s2+s1+" ";
count=0;
k=i+1;
}
}
cout<<s2<<endl;
return 0;
}

    