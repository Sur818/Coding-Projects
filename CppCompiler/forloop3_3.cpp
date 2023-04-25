#include<iostream>
using namespace std;

int main()
{
 int i,n,j;
cout<<"enter row:-";
cin>>n;
if(n%2!=0)
{
for(i=1;i<=(n+1)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=i;j<=(n+1)/2;j++)
{
cout<<j;
}
cout<<"\n";
}

for(i=(n-1)/2;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=i;j<=(n-1)/2+1;j++)
{
cout<<j;
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
for(j=i;j<=(n)/2;j++)
{
cout<<j;
}
cout<<"\n";
}
for(i=(n)/2;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=i;j<=(n)/2;j++)
{
cout<<j;
}
cout<<"\n";
}
}

return 0;
}
