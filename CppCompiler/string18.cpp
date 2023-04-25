#include<iostream>
using namespace std;
bool charecter_back(string s1,char l)
{
int n;
n=s1.length();
if(s1[n-1]==l)
{
return true;
}
else
{
return false;
}
}

int main()
{
  string s,s1,s2;
char l;
cout<<"enter string:-";
getline(cin,s);
s=s+" ";
cout<<"enter charecter want to check last in the word:-";
cin>>l;
int i,n,k=0,count=0;
n=s.length();
for(i=0;i<n+1;i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(k,count-1);
if(charecter_back(s1,l))
{
s1.pop_back();
s1.push_back('a');
cout<<s1<<" ";
}
else 
{
cout<<s1<<" ";
}
k=i+1;
count=0;
}
}
return 0;
}
    