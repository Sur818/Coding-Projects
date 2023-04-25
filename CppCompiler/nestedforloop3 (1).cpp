#include<iostream>
using namespace std;

int main()
{
  int n,i,j,k=1;
cout<<"enter row:-";
cin>>n;
if(n%2!=0)
{
for(i=1;i<=(n+1)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
}
cout<<"\n";
}
for(i=1;i<=(n-1/2)-1;i++)
{
for(j=1;j<=(n/2)+1-i;j++)
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
cout<<j;
}
cout<<"\n";
}
for(i=1;i<=(n/2);i++)
{
for(j=1;j<=(n/2)+1-i;j++)
{
cout<<j;
}
cout<<"\n";
}
}

return 0;
}

