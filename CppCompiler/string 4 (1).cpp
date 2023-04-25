#include<iostream>
using namespace std;

int main()
{
  char str[100];
char s[10];
int i=0,p,q;
cout<<"enter sentence :-";
gets(str);
cout<<"enter position:-";
cin>>p;
cout<<"enter no of word:-";
cin>>q;
while (i<q)
{
s[i]=str[p-1+i];
i++;
}
cout<<"\n\nafter astraction:--\n\n";
for(i=0;i<strlen(s);i++)
{
cout<<s[i];
}
return 0;
}