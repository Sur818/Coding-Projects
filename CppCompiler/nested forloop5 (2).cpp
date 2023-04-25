#include<iostream>
using namespace std;

int main()
{
 int i,j,n,k;
cout<<"enter range:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=2;j<=i;j++)
{
cout<<" ";
}
for(k=1;k<=n+1-i;k++)
{
cout<<k;
}
for(k=n-i;k>=1;k--)
{
cout<<k;
}
cout<<"\n";
}
for(i=2;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
for(k=i-1;k>=1;k--)
{
cout<<k;
}
cout<<"\n";
}
return 0;
}


