#include<iostream>
using namespace std;

int main()
{
int i,n,vowel=0,digit=0,spchar=0, consonents=0;
char str[10];
char *p=str;
cout<<"enter string:-";
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
{
vowel++;
}
else if(*(p+i)>='0'&&*(p+i)<='9')
{
digit++;
}
else if(*(p+i)=='@'||*(p+i)=='#'||*(p+i)=='$')
{
spchar++;
}
else
{
consonents++;
}
}
cout<<"no of vowel="<<vowel<<endl;
cout<<"no of consonents="<<consonents<<endl;
cout<<"no of digits="<<digit<<endl;
cout<<"no of special charecters="<<spchar<<endl;
return 0;
}