#include<iostream>
using namespace std;

int main()
{
  int n,j,i,k=0;
cout<<"enter no of term:-";
cin>>n;
int m=n-1;
for(i=n;i>=1;i--)
{
for(j=1;j<=k;j++)
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

