#include<iostream>
using namespace std;

int main()
{
  int n,i,j,k=1;
cout<<"enter row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
}
cout<<"\n";
}
for(i=1;i<=n-1;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<j;
}
cout<<"\n";
}
return 0;
}

