#include<iostream>
using namespace std;

int main()
{
  char *c;
c=(char*)malloc(10*sizeof(char));
if(c==NULL)
{
cout<<"no memory allocation:-";
}
else
{
cout<<"memory allocated:-";
}
cout<<"\nenter string:-";
gets(c);
puts(c);
return 0;
}