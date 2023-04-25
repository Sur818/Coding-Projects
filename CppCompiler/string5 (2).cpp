#include<iostream>
using namespace std;

int main()
{
 char s[100];
int i,j,k=0;
cout<<"enter string:--";
cin.get(s,100);
strcat(s," ");
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' '||s[i]=='\0')
{
for(j=k;j<i;j++)
{
cout<<s[j];
}
k=i+1;
cout<<endl;
}
}
return 0;
}