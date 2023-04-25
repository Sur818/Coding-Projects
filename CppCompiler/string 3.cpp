#include<iostream>
using namespace std;

int main()
{
  char str[100],temp;
int i,n,v=0, special=0,f=0,consonents=0;
cout<<"enter string:-";
cin.get(str,100);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]=='i'||str[i]=='a'||str[i]=='o'||str[i]=='u')
{
v++;
}
else if(str[i]=='@'||str[i]=='&'||str[i]=='$'||str[i]=='#')
{
special++;
}
else if(str[i]==' ')
{
f--;
}
else
{
consonents++;
}
}
cout<<"no of vowel="<<v<<endl;
cout<<"no of special charecters="<<special;
cout<<"\n no of consonents="<<consonents-f;
return 0;
}







