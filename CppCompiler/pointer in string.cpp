#include<iostream>
using namespace std;

int main()
{    
   char a[100];
char *p=a;
int count=0;
cout<<"enter string:-";
gets(a);
int i,n;
n=strlen(a);
for(i=0;i<n;i++)
{
if(*(p+i)==' '||*(p+i+1)=='\0')
{
count++;
}
}
cout<<"no of word present in string="<<count;
return 0;
}
