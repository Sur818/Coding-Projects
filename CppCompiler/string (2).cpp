#include<iostream>
using namespace std;

int main()
{
int i,len=0;
 char ch[100];
cout<<"enter string:-";
cin.get(ch,100);
for(i=0;ch[i]!='\0';i++)
{
len++;
}
cout<<"length of enterd string:---->\n\n"<<len;
}
