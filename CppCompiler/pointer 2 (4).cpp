#include<iostream>
using namespace std;

int main()
{
  char a[10];
char *p=a,temp;
cout<<"enter name:";
gets(p);
int n=strlen(p);
for(int i=0;i<n/2;i++)
{
temp=*(p+i);
*(p+i)=*(p+n-1-i);
*(p+n-1-i)=temp;
}
for(int i=0;i<n;i++)
{
cout<<*(p+i);
}
return 0;
}