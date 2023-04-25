#include<iostream>
using namespace std;

int main()
{
 char ch[100];
cout<<"enter name:-";
fgets(ch,sizeof(ch),stdin);
cout<<ch;
}