#include<iostream>
#include<math.h>
using namespace std;

int main()
{
long double r,R,q,v,p;
cout<<"enter radius of ring";
cin>>R;
cout<<"enter distance where potential want";
cin>>r;
cout<<"enter charge";
cin>>q;
if(r<R||r==R)
{
p=pow(10,9);
long v=9*p*(q/r);
cout<<"potential inside the ring"<<v;
}
else if(r>R)
{
long v=9*pow(10,9)*(q/(r*r));
cout<<"potential at outside the ring:-"<<v;
}
return 0;
}
