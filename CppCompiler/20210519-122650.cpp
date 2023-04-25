#include<iostream>
using namespace std;

int main()
{
 int i,j,n,k=0,l=0;
cout<<"enter size:-";
cin>>n;
int a[n][n];
int b[n];
int c[n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
if(i<j)
{
b[k++]=a[i][j];
}
if(i>j)
{
c[l++]=a[i][j];
}
}
}

cout<<"entered element are:---\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<"  ";
}
cout<<"\n";
}

k=0;
l=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i<j)
{
a[i][j]=c[l++];
}
if(i>j)
{
a[i][j]=b[k++];
}
}
}
cout<<"after upgradation:--->\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}


