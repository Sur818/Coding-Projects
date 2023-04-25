#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,r;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int b[n];
int a[n][m];
int *p=&a[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p+i*m+j);
}
}
cout<<"enter array are:-\n";
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j];
if(j<m-1&&a[i][j]<10)
{
cout<<"  ";
}
else if(j<m-1)
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}

cout<<"which collom want to delete:-";
cin>>r;
for(i=r-1;i<n;i++)
{
for(j=0;j<m;j++)
{
a[i][j]=a[i+1][j];
}
}
cout<<"after deleteion row:-\n";
for(i=0;i<n-1;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<*(p+i*(n-1)+j);
if(j<m&&*(p+i*(n-1)+j)<10)
{
cout<<"  ";
}
else if(j<m)
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}
return 0;
}