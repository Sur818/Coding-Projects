#include<iostream>
using namespace std;

int main()
{
 int i;
char s[10];
cout<<"\n convert latter's upper case if are in lower case and vice vers\n\n";
cout<<"enter string:-";
cin>>s;
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='a'&&s[i]<='z')
{
s[i]=(char)(s[i]-32);
}
else if(s[i]>='A'&&s[i]<='Z')
{
s[i]=(char)(s[i]+32);
}
}
for(i=0;s[i]!='\0';i++)
{
cout<<s[i];
}
}