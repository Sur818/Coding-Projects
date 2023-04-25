#include<iostream>
using namespace std;

int main()
{
int a,b;
char c;
cout<<"enter two no";
cin>>a>>b;
cout<<"enter operation";
cin>>c;
switch (c)
{
case '+':
{
int sum=a+b;
cout<<"sum of both no="<<sum;
break;
}
case '*':
{
int prod=a*b;
cout<<"prod of both no="<<prod;
break;
}
case '%':
{
int m=a%b;
cout<<"remaider of a%b="<<m;
break;
}
case '/':
{
int d=a/b;
cout<<"division of both no="<<d;
break;
}
default:
{
cout<<"enter valid operation";
break;
}
}
return 0;
}