#include<iostream>
using namespace std;

int main()
{
 int n,i,j,k;
cout<<"enter no:-";
cin>>n;
for(i=1;i<=n;i++)
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
return 0;
}