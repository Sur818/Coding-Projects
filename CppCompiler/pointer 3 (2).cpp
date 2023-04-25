#include<iostream>
using namespace std;

int main()
{
 double r,A;
double *ptr=&r;
cout<<"enter radius";
cin>>*ptr;
A=3.14*(*ptr)*(*ptr);
cout<<"area of circle:="<<A;
return 0;
}