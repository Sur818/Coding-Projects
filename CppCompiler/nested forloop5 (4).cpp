#include<iostream>
using namespace std;

int main()
{
  int i,j,n;
cout<<"enter no of term:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
if(i!=n)
cout<<"\n";
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n+i-1&&i!=1;j++)
{
cout<<" ";
}
for(j=n;j>=i;j--)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}

