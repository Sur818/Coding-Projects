#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double a,b,c,s,Area;
    cout << "enter first side of triangle:+";
   cin>>a;
cout<<"enter second side of triangle:-";
cin>>b;
cout<<"enter 3rd side of trangle";
cin>>c;
s=(a+b+c)/2;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"area of trangle:-"<<Area;
     return 0;
}