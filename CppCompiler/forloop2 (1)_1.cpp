#include<iostream>
using namespace std;

int main()
{
  int n,j,i,k=0,m=0;
cout<<"enter no of term:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=k;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<j;
}
k=k+(m++);
cout<<"\n";
}
return 0;
}

