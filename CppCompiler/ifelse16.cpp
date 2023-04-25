#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 cout << "find electrical field and potential due to hollow shell\n";
  double r,R,q,l,E,v;
cout<<"enter radius=";
cin>>R;
cout<<"enter charge=";
cin>>q;
if(q==0)
{
cout<<"enter charge density=";
cin>>l;
q=l*2*3.14*R;
}
cout<<"enter distance=";
cin>>r;
if(r<=R)
{
long v=9*pow(10,9)*(q/R);
 E=0;
if(q<0)
{
cout<<"nagative potential="<<v;
}
else
{
cout<<"positive potential="<<v;
}
cout<<"\nEF inside shell="<<E;
}
else
{
 long v=9*pow(10,9)*(q/(r));
long E=v/r;
if(q<0)
{
cout<<"nagative potential="<<v;
cout<<"\nEF towards centre="<<-E;
}
else
{
cout<<"positive potential="<<v;
cout<<"\nEF away from center="<<E;
}
}
return 0;
}




