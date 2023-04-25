#include<iostream>
using namespace std;

int main()
{
 int i,j,n,k=0;
cout<<"enter no of row:-";
cin>>n;
for(i=1;i<=n;i++)
{
k=i;
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<k++;
}
for(j=2;j<=i;j++)
{
cout<<k-2;
k--;
}
cout<<"\n";
}
return 0;
}
