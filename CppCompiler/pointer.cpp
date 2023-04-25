#include<iostream>
using namespace std;
int compare(char *s1,char *s2,int l)
{
int i=0,flag=0;
while (i<l)
{
if(*(s1+i)!=*(s2+i))
{
flag=1;
break;
}
i++;
}
if(flag==0)
{
return 0;
}
else
{
return 1;
}
}

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
k=i+1;
if(compare(s1,s,l)==0)
{
cout<<"fount at word postion="<<pos;
}
l=0;
}
}

//cout<<strcmp(s,s1-2);

return 0;
}


        