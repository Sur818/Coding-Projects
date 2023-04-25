#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<<"enter size:-";
cin>>n;
  int a[n];
  int *ptr=a;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>*(ptr+i);
}
cout<<"entered array are:-\n\n";
for(i=0;i<n;i++)
{
cout<<*(ptr+i);
}
return 0;
}