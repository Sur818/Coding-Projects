#include<iostream>
using namespace std;
void max_min_word(char[],int,int);
void print(char [] ,int );

int main()
{
  char s[100];
cout<<"enter string:-";
cin.get(s,100);
int i,l,n,ans1=5,ans2=0,k=0;
strcat(s," ");
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]==' ')
{
l=i-k;
ans1=min(ans1,l);
ans2=max(ans2,l);
k=i+1;
}
}
max_min_word(s,ans2,ans1);
}

void max_min_word(char s[],int ans2,int ans1)
{
int i,j,k=0,l=0;
char s1[10];
for(i=0;i<strlen(s);i++)
{
if(s[i]==' ')
{
for(j=k;j<i;j++)
{
s1[l++]=s[j];
}
if(l==ans2)
{
cout<<"max length word are:---";
print(s1,l);
cout<<"\n";
}
if(l==ans1)
{
cout<<"min length word are:--";
print(s1,l);
}
l=0;
k=i+1;
}
}
}
void print(char s1[] ,int l)
{
int i;
for(i=0;i<l;i++)
{
cout<<s1[i];
}
cout<<endl;
}











