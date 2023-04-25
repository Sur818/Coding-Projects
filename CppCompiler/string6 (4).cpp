#include<iostream>
using namespace std;
void reverse (char [],int );
int main()
{
cout<<"reverse string word wise:-\n\n";
   int i,n,k=0,j,l=0;
char ch[100];
char ch1[100];
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
ch1[l++]=ch[j];
}
reverse(ch1,l);
l=0;
k=i+1;
}
}
return 0;
}


void reverse (char ch1[],int l)
{
int i;
for(i=0;i<l;i++)
{
cout<<ch1[l-1-i];
}
cout<<" ";
}



  