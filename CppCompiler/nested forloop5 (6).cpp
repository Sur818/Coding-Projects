#include<iostream>
using namespace std;

int main()
{
 int i,n,j;
cout<<"enter no of row:-";
cin>>n;
if(n%2!=0)
{
for(i=(n+1)/2;i>=1;i--)
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
}
else
{
for(i=(n)/2;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=1;j<=2*((n)/2-i);j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=1;i<=(n)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=1;j<=2*((n)/2-i);j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
}
return 0;
}
