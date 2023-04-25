#include<iostream>
using namespace std;

int main()
{
int i;
   char s[100];
cout<<"enter string:-";
gets(s);
char *str=s;
for(i=0;*(str+i)!='\0';i++)
{
cout<<"'"<<*(str+i)<<"'"<<" ";
}
return 0;
}
