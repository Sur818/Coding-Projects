#include<iostream>
using namespace std;

int main()
{
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr1[n][m];
int arr2[n][m];
cout<<"enter element in first:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr1["<<i<<"]["<<j<<"]=";
cin>>arr1[i][j];
}
}
cout<<"enter element in second :-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr2["<<i<<"]["<<j<<"]=";
cin>>arr2[i][j];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
arr2[i][j]=arr1[i][j]+arr2[i][j];
}
}
cout<<"sum of two matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr2[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}




