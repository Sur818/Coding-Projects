#include<iostream>
using namespace std;

int main()
{
  int i,j,n;
cout<<"enter no:-";
cin>>n;
if(n%2!=0)
{
for(i=1;i<=(n+1)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=1;j<=2*((n+1)/2-i);j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=2;i<=(n+1)/2;i++)
{
for(j=1;j<=(n+1)/2+1-i;j++)
{
cout<<"*";
}
for(j=1;j<=2*(i-1);j++)
{
cout<<" ";
}
for(j=1;j<=((n+1)/2+1-i);j++)
{
cout<<"*";
}
cout<<"\n";
}
}
else
{
for(i=1;i<=n/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=1;j<=2*(n/2-i);j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=1;i<=n/2;i++)
{
for(j=1;j<=n/2+1-i;j++)
{
cout<<"*";
}
for(j=1;j<=2*(i-1);j++)
{
cout<<" ";
}
for(j=1;j<=(n/2+1-i);j++)
{
cout<<"*";
}
cout<<"\n";
}
}
return 0;
}

