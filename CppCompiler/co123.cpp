#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
cout<<"enter three no:-";
cin>>a>>b>>c;
int d=(a>b)?((a>c)?a:c):(b>c)?((b>a)?b:c):(c>a)?((c>b)?c:b):a;
cout<<d;
}