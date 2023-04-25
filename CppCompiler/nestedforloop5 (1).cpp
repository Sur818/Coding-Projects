#include<iostream>
using namespace std;

int main()
{
  int i,j,n;
cout<<"enter no of row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=2;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=1;i<=2*n;i++)
{
for(j=1;j<=(n-1);j++)
{
cout<<" ";
}
for(j=1;j<=3;j++)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}
