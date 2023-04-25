#include<iostream>
using namespace std;

int main()
{
int i;
  char str[100];
cout<<"enter string:-";
cin>>str;
char str1[100];
cout<<"enter string:-";
cin>>str1;
//if both string are equal then it returns 0;
int n=strcmp(str,str1);
cout<<n;
return 0;
}