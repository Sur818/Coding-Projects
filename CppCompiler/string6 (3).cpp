#include<iostream>
using namespace std;
void compare(char ch[],char ch1[]);

int main()
{
   int i,n;
char ch[100];
char ch1[100];
cout<<"enter string:-";
gets(ch);
n=strlen(ch);
for(i=n-1;i>=0;i--)
{
ch1[i]=ch[n-1-i];
}
compare(ch,ch1);
return 0;
}

void compare(char ch[],char ch1[])
{
int i=0,flag=0;
while (i<strlen(ch))
{
if(ch[i]!=ch1[i])
{
flag++;
cout<<"not palindrome:-";
break;
}
i++;
}
if(flag==0)
{
cout<<"palindrome";
}
}

  