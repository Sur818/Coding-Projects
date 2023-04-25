#include<iostream>
using namespace std;
double area_cir(int*r)
{
double A;
A=3.14*(*r)*(*r);
return A;
}
int main()
{
int r;
cout<<"enter radius :-";
cin>>r;
cout<<"area of circle="<<area_cir(&r);
}