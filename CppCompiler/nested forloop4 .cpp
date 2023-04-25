#include<iostream>
using namespace std;

int main()
{
  int n,j,i;
cout<<"enter no of term:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=2;j<=i-1;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<j;
}
cout<<"\n";
}
return 0;
}

