#include<iostream>
using namespace std;

int main()
{
   int i;
   char ch[10];
cout<<"enter string:-";
gets(ch);
for(i=0;i<strlen(ch);i++)
{
ch[i]=(char)(ch[i]+1);
cout<<ch[i];
}
return 0;
}