#include<iostream>
#include <string.h>
using namespace std;
int main()
{
cout<<"reverse string word wise:-\n\n";
   int i,n,k=0,j,l=0,t=0;
char ch[100];
char s[100][100];
cout<<"enter string:-";
gets(ch);
strcat(ch," ");
n=strlen(ch);
for(i=0;i<n;i++)
{
if(ch[i]==' ')
{
for(j=k;j<i;j++)
{
s[l][t++]=ch[n-2-j];
}
l=l+1;
t=0;
k=i+1;
}
}
for(i=0;i<l;i++)
{
cout<<s[i]<<" ";
}
return 0;
}





  