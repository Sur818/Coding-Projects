#include<iostream>
using namespace std;

struct area
{
  
int l;
int w;
void m1();
};

void m1()
{
struct area a;
cout<<"enter length:-";
cin>>a.l;
cout<<"enter width:-";
cin>>a.w;
cout<<"area="<<a.l*a.w;
}

int main()
{
m1();
}

      