#include<iostream>
using namespace std;
bool ispelindrome(char [],int);
bool isequal(char [],char [],int);
int main()
{
  char s[100];
char s1[10];
int i,j,k=0,l=0;
cout<<"enter string:-";
gets(s);
strcat(s," ");
cout<<"\npalindrome word present in string are--->\n\n";
for(i=0;i<strlen(s);i++)
{
if(s[i]==' ')
{
for(j=k;j<i;j++)
{
s1[l++]=s[j];
}
if(ispelindrome(s1,l))
{
for(j=k;j<i;j++)
{
cout<<s[j];
}
cout<<" ";
}
l=0;
k=i+1;
}
}
return 0;
}

bool ispelindrome(char s1[],int l)
{
int i;
char s[10];
for(i=0;i<l;i++)
{
s[i]=s1[l-1-i];
}
if(isequal(s,s1,l))
{
return true;
}
else
return false;
}

bool isequal(char s[],char s1[],int l)
{
int i=0,flag=0;
while (i<l)
{
if(s[i]!=s1[i])
{
flag++;
return false;
}
i++;
}
if(flag==0)
{
return true;
}
}


