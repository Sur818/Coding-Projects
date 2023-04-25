#include<iostream>
using namespace std;
void print(int *arr,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*m+j)<<" ";
}
cout<<"\n";
}
}


void array_point(int *arr,int n,int m)
{
int i,j,r,*b;
cout<<"entered array:-\n";
print(arr,n,m);
cout<<"which row want to sort:-";
cin>>r;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[j]=*(arr+i*m+j);
}
if(i==r-1)
{
sort(b,b+j);
for(j=0;j<m;j++)
{
cout<<b[j]<<" ";
}
}
else
{
for(j=0;j<m;j++)
{
cout<<b[j]<<" ";
}
}
cout<<"\n";
}
}









int main()
{
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
array_point((int *)a,n,m);
}