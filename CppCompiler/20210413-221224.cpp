#include<iostream>
using namespace std;

int main()
{
  char c;
cout<<"enter charecter";
cin>>c;
cout<<"size of charecter="<<sizeof(c);
int a=10;
cout<<"\nsize of int="<<sizeof(a);
float b=10000.34429;
cout<<"\nsize of float="<<sizeof(b);
double d=1003.2;
cout<<"\nsize of double="<<sizeof(d);
long long int e=10;
cout<<"\nsize of long long int="<<sizeof(e);
long double f=10.6;
cout<<"\nsize of long double="<<sizeof(f);
return 0; 


}