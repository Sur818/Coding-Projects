#include<iostream>
using namespace std;

int main()
{
  char s[100];
int i,j,n,k;
cout<<"\n this is the program of piglatin word:--\n\n";
cout<<"\nenter string in uppercase:--\n\n";
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
char ch=s[i];
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
for(j=i;j<n;j++)
{
cout<<s[j];
}
for(k=0;k<i;k++)
{
cout<<s[k];
}
cout<<"AY";
break;
}
}
}
