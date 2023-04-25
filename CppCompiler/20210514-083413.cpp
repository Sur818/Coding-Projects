#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,sum=0,sum1=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}


cout<<"left diagonal :-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i==j)
{
cout<<"\\"<<arr[i][j]<<"\\"<<" ";
}
cout<<" ";
}
cout<<"\n";
}
cout<<"right digonal :-\n";

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i+j==n-1)
{
cout<<"/"<<arr[i][j]<<"/"<<" ";
}
cout<<" ";
}
cout<<"\n";
}
return 0;
}
