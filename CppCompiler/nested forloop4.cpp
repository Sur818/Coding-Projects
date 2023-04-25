#include<iostream>
using namespace std;

int main()
{
   int n,i,j;
  cout<<" no of row:-";
cin>>n;
if(n%2!=0)
{
for(i=1;i<=(n+1)/2;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=(n-1)/2;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
}
return 0;
}

