#include<iostream>
using namespace std;

int main()
{
 char s[100];
int i,j,k=0,l=0,t=0;
cout<<"enter string:--";
cin.get(s,100);
strcat(s," ");
char z[10][10];
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' '||s[i]=='\0')
{
for(j=k;j<i;j++)
{
z[l][t++]=s[j];
}
z[l][t]='\0';
l++;
t=0;
k=i+1;
}
}
for(i=0;i<l;i++)
{
for(j=0;z[i][j]!='\0';j++)
{
cout<<z[i][j];
}
cout<<endl;
}
return 0;
}