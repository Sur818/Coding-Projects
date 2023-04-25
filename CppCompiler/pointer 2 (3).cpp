#include<iostream>
using namespace std;

int main()
{
  char a[10];
char *p=a;
cout<<"enter name:";
gets(p);
for(int i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i);
}
return 0;
}