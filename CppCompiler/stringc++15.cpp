#include<iostream>
using namespace std;

int main()
{
   string s,s1,s2;
char temp;
cout<<"\n\n in this program we interchange firs and last charecter of each word\n\n";
cout<<"enter string:-";
getline(cin,s);
int i,n,k=0;
s=s+" ";
n=s.length();
for(i=0;i<n;i++)
{
if(s[i]==' ')
{
temp=s[i-1];
s[i-1]=s[k];
s[k]=temp;
k=i+1;
}
}
cout<<s;
return 0;
}