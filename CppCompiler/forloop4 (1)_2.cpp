#include<iostream>
using namespace std;

int main()
{
 int n,i,j,k;
cout<<"enter no:-";
cin>>n;
if(n%2!=0)
{
for(i=1;i<=(n+1)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
cout<<"\n";
}
for(i=(n-1)/2;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
cout<<"\n";
}
}
else
{
for(i=1;i<=(n)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
cout<<"\n";
}
for(i=(n)/2;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
cout<<"\n";
}
}
return 0;
}