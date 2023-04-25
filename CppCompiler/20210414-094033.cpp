#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a1,b1,a2,b2;
double d;
  cout<<"enter first cordinate";
cin>>a1>>b1;
cout<<"enter second coordinates";
cin>>a2>>b2;
d=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
cout<<"distance of two points:-"<<d;
return 0;
}