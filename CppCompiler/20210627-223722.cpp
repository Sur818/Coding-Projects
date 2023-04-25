#include<iostream>
using namespace std;
void submatrix(int arr[10][10],int n,int m)
{
int i,j;
for(i=0;i<=n;i++)
{
cout<<"[";
for(j=0;j<=m;j++)
{
cout<<arr[i][j]<<" ";
}
}
cout<<"]";
cout<<"\n";
}


void sub_matrix(int arr[10][10],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
submatrix(arr,i,j);
}
}
}


int main()
{
 int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[10][10];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
sub_matrix(arr,n,m);
}
