#include<iostream>
using namespace std;

void print(int p,int n)
{

 int i,j,k;
for(k=1;k<=p;k++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<j;
}
for(j=i-1;j>=1;j--)
{
cout<<j;
}
cout<<"\n";
}
for(i=1;i<=n-1;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=n-i;j>=1;j--)
{
cout<<j;
}
for(j=2;j<=n-i;j++)
{
cout<<j;
}
cout<<"\n";
}
}
cout<<"\n\n";
}

int main()
{
int n,p;
cout<<"enter no:-";
cin>>n;
cout<<"how many times pattern want to repeat:-";
cin>>p;
print(p,n);
}