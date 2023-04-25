#include<iostream>
using namespace std;

void chrismas(int n)
{
 int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
for(j=2;j<=i;j++)
{
cout<<"*";
}
cout<<"\n";
}
}

void print(int n)
{
int i,j;
for(i=1;i<=2*n;i++)
{
for(j=1;j<=(n-2);j++)
{
cout<<" ";
}
for(j=1;j<=3;j++)
{
cout<<"*";
}
cout<<"\n";
}
}

int main()
{
int n,p,i;
cout<<"enter no of pyramid structure in Xmastree:-";
cin>>p;
cout<<"enter no of row:-";
cin>>n;
for(i=1;i<=p;i++)
{
chrismas(n); 
}
print(n);
return 0;
}

