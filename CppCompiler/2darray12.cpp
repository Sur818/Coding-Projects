#include<iostream>
using namespace std;

int main()
{
  int i,j,n,m,sum=0;
cout<<"enter row :-";
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
sum=0;
}


for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i>j)
{
a[i][j]=0;
}
}
}
cout<<"\n settings lower tranguler matrix is zero:-----\n";
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
