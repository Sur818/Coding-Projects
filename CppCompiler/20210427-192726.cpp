#include<iostream>
using namespace std;
int main()
{
string s;
cout<<"enter string";
getline(cin,s);
char ch[100];
int i,k=0,n;
n=s.length();
for(i=0;i<n;i++)
{
if(s[i]!=' ')
{
ch[k++]=s[i];
}
}
for(i=0;i<=k;i++)
{
cout<<ch[i]<<" "<<endl;
}
return 0;
}





    