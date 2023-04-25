#include<iostream>
using namespace std;
void delete_word(char [],char [],char[]);
 int compare (char [],char [],int );
int main()
{
int i;
 char str[100];
cout<<"enter name:-";
cin.get(str,100);
strcat(str," ");
char s[10];
char s1[10];
cout<<"which words want to delete:--";
cin>>s;
cout<<"\n\n <+-----after deletion-----+>\n\n";
delete_word(str,s,s1);
return 0;
}

void delete_word(char str[],char s[],char s1[])
{
int i,j,k=0,l=0;
for(i=0;i<strlen(str);i++)
{
if(str[i]==' ')
{
for(j=k;j<i;j++)
{
s1[l++]=str[j];
}
k=i+1;
int n=compare(s,s1,l);
if(n==0)
{
for(j=0;j<l;j++)
{
cout<<s1[j];
}
cout<<" ";
}
l=0;
}
}
}



int compare (char s[],char str[],int l)
{
int i=0;
while (i<l)
{
if(s[i]!=str[i])
{
return 0;
break;
}
i++;
}
return 1;
}








