#include<iostream>
using namespace std;
bool isequal(int ,char [],char []);
void compare_print(char [] ,int ,char []);
void substring(char [],int ,int );

int main()
{
cout<<"\n this program print duplicate word present in string-->\n\n";
 char str[100];
cout<<"enter string:--";
gets(str);
int i,n,j,k=0;
n=strlen(str);
str[n]=' ';
n=n+1;
cout<<"\n\n duplicate word are:---\n\n";
for(i=0;i<n;i++)
{
if(str[i]==' ')
{
substring(str,k,i);
k=i+1;
}
}
}

void substring(char s[],int k,int i)
{
char s1[10];
int l=0,j;
for(j=k;j<i;j++)
{
s1[l++]=s[j];
//cout<<s1[l-1];
}
//cout<<i;
compare_print(s1,i,s);
}


void compare_print(char s1[],int i,char s[])
{
int j,k=i+1,l=0,t;
char s2[10];
//cout<<k;
for(j=k;j<strlen(s);j++)
{
if(s[j]==' ')
{
//cout<<j;
for(t=k;t<j;t++)
{
s2[l++]=s[t];
//cout<<s2[l-1];
}
if(isequal(l,s2,s1))
{
//cout<<"hello";
for(t=k;t<j;t++)
{
cout<<s[t];
}
cout<<" ";
}
k=j+1;
l=0;
}
}
}

bool isequal(int l,char s1[],char s2[])
{
int i=0,flag=0;
while (i<l)
{
if(s1[i]!=s2[i])
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








