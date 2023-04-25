#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,k;
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
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}

cout<<"after sorting along collom:-\n";
for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
{
b[i]=a[i][j];
}
sort(b,b+i);
for(i=0;i<n;i++)
{
a[i][j]=b[i];
}
cout<<"\n";
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}

return 0;
}



    