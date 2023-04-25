#include<iostream>
using namespace std;

int main()
{
  char str[100];
char s[100],s1[100];
int i,k=0,j,l=0,pos=0,temp;
cout<<"enter sentence :-";
gets(str);
strcat(str," ");
cout<<"word wants to check:--";
cin>>s;
for(i=0;i<strlen(str);i++)
{
if(str[i]==' ')
{
pos++;
for(j=k;j<i;j++)
{
s1[l++]=str[j];
}
for(j=0;j<l/2;j++)
{
temp=s1[j];
s1[j]=s1[l-1-j];
s1[l-1-j]=temp;
}
k=i+1;
if(strcmp(s1+(temp-l),s)==0)
{
cout<<"fount at word postion="<<pos;
}
temp=l;
l=0;
}
}

//cout<<strcmp(s,s1-2);

return 0;
}


        