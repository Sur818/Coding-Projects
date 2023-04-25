#include<iostream>
using namespace std;

int main()
{
  char s1[10];
cout<<"enter string:-";
cin.get(s1,10,'\n');
char s2[10];
cout<<"enter string:-";
cin>>s2;
cout<<strcat(s1,s2);
}