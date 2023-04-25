#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 double a,b,c,v,x1,x2,D;
cout<<"enter coff of x squre:-";
cin>>a;
cout<<"enter coff of x";
cin>>b;
cout<<"enter const";
cin>>c;
v=b*b-4*a*c;
D=sqrt(v);
x1=(-b+D)/2;
x2=(-b-D)/2;
cout<<x1<<"\n"<<x2;
return 0;
}