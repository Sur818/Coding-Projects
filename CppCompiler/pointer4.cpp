#include<iostream>
using namespace std;
int string_size(char*ch)
{
int i,count=0;
for(i=0;*(ch+i)!='\0';i++)
{
count++;
}
return count;
}


int main()
{
 
char ch[100];
cout<<"enter string:-";
gets(ch);
cout<<"length of string:-";
cout<<string_size(ch);
return 0;
}