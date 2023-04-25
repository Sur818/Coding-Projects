#include<iostream>
using namespace std;

int main()
{
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[m][n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
b[j][i]=a[i][j];
}
}
cout<<"transpose of matrix are:-\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}




    