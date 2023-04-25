#include<iostream>
using namespace std;

int main()
{
  int n,j,i,k=0,m=n-1;
cout<<"enter no of term:-";
cin>>n;
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=i;j>=1;j--)
{
cout<<j;
}
k=k+(m--);
cout<<"\n";
}
return 0;
}

