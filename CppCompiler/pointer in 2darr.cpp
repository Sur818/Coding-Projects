#include<iostream>
using namespace std;
int main()
{
int n,m,i,j;
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
int *p=&a[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(p+i*m+j)<<" ";
}
cout<<"\n";
}
return 0;
}
