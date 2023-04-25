#include<iostream>
using namespace std;

int main()
{
 char str[5][10];
 int i,j;
cout<<"enter string:-";
for(i=0;i<5;i++)
{
gets(str[i]);
}
cout<<"\n\ninput string are:--->\n\n";
for(i=0;i<5;i++)
{
cout<<str[i]<<endl;
}
}
