#include<iostream>
using namespace std;
int determinant(int *a,int n)
{
int i=0,j,sign=1;
if(n==2)
{
det+=(a[1][1]*a[0][0]-a[1][0]*a[0][1]);
}
else
{
while(i<=n)
{
sign=sign*-1;
b=submatrix(i+1,j+1,a);
sum+=sign*a[i][0]+determinant(b,n-1);
}
}



void print(int *a,int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
}


int main()
{
  int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"entered array:-\n";
print((int*)a,n);
cout<<determinant((int *)a,n);
}


