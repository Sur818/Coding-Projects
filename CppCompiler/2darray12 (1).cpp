#include<iostream>
using namespace std;

int main()
{
  int i,j,n,k,m;
cout<<"enter row :-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

cout<<"input arrays are:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j];
if(a[i][j]<10)
{
cout<<"   ";
}
else
{
cout<<"  ";
}
}
cout<<"\n";
}



cout<<"after sorting along tho collom:-\n";

for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
{
b[i]=a[i][j];
}
sort(b,b+n);
for(k=0;k<n;k++)
{
a[k][j]=b[k];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j];
if(a[i][j]<10)
{
cout<<"   ";
}
else
{
cout<<"  ";
}
}
cout<<"\n";
}

return 0;
}
    