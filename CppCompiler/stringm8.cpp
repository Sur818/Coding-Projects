#include<iostream>
using namespace std;
void substring (int ,int,char []);
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
substring(i,n,s);
substring(0,i,s);
cout<<"AY";
break;
}
}
return 0;
}


void substring (int i,int n,char s[])
{
int j;
for(j=i;j<n;j++)
{
cout<<s[j];
}
}