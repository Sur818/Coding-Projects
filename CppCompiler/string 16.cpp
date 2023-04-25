#include<iostream>
using namespace std;
bool check_palindrome(string );
int main()
{
int i,j,n,count,ans=0;
 string s,s1,s2;
cout<<"enter string:-";
getline(cin,s);
n=s.length();
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
count++;
s1=s.substr(i,count-1);
if(check_palindrome(s1))
{
if(s1.length()>ans)
{
s2=s.substr(i,count-1);
}
ans=max(ans,count-1);
}
}
}
cout<<"longest pelindromic substring:-"<<s2<<endl;
return 0;
}


bool check_palindrome(string s)
{
string s1=s;
reverse(s.begin(),s.end());
if(s1.compare(s)==0)
return true;
else
return false;
}