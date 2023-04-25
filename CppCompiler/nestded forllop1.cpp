#include<iostream>
using namespace std;

int main()
{
 int n,i,j;
cout<<"enter row:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(j=1;j<=n;j++)
{
if(i==1||i==n||j==i)
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<"\n";
}
return 0;
}