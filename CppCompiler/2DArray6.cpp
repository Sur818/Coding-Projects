#include<iostream>
using namespace std;

int main()
{
  int i,j,n,m,temp;
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

for(i=0;i<m;i++)
{
temp=arr[0][i];
arr[0][i]=arr[2][i];
arr[2][i]=temp;
}
cout<<"after interchange first row and last collom:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
