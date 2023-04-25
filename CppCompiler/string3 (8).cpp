#include<iostream>
using namespace std;

int main()
{
   char str1[10];
char str2[10];
cout<<"enter string:-";
cin.get(str1,10);
strcpy(str2,str1);
cout<<str2;
}