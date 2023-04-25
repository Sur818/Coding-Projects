#include<iostream>
using namespace std;

int main()
{
  char ch;
cout<<"enter charecter:-";
cin>>ch;
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{
cout<<"charecter";
}
else if(ch>=0&&ch<=9)
{
cout<<"integer";
}
else
{
cout<<"special charecter";
}
return 0;
}