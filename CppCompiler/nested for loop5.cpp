#include<iostream>
using namespace std;

int main()
{
 int i,j,k,n;
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
for(k=i;k<=(n+1)/2;k++)
{
cout<<"* ";
}
cout<<"\n";
}
for(i=2;i<=(n+1)/2;i++)
{
for(j=1;j<=(n+1)/2+1-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<"* ";
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
for(k=i;k<=n/2;k++)
{
cout<<"* ";
}
cout<<"\n";
}
for(i=1;i<=n/2;i++)
{
for(j=1;j<=n/2+1-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<"* ";
}
cout<<"\n";
}
}
return 0;
}
