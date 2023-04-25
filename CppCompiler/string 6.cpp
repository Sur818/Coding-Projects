#include<iostream>
using namespace std;

int main()
{
   int i;
   char ch[100];
cout<<"enter string:-";
gets(ch);
for(i=strlen(ch);i>=0;i--)
{
ch[i+1]=ch[i];
}
ch[0]=' ';
for(i=0;i<strlen(ch);i++)
{
if(ch[i]==' ')
{
if(ch[i+1]>='a'&&ch[i+1]<='z')
{
ch[i+1]=(char)(ch[i+1]-32);
}
}
}
for(i=1;i<strlen(ch);i++)
{
cout<<ch[i];
}
return 0;
}