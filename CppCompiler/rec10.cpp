#include<iostream>
using namespace std;

int aps(int l,int a,int d)
{
int sum=0;
if(a<=l)
{
cout<<a;
if(a<l)
{
cout<<"+";
}
sum=sum+a;
return sum+aps(l,a+d,d);
}
cout<<"=";
return sum;
}


int main()
{
int a,d,l;
cout<<"enter first term";
cin>>a;
cout<<"enter common difference";
cin>>d;
cout<<"enter last term";
cin>>l;

cout<<aps(l,a,d);
}